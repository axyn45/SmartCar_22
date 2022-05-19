/*LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
【平    台】北京龙邱智能科技TC2/3xx核心板
【编    写】chiusir
【E-mail】chiusir@163.com
【软件版本】V1.1 版权所有，单位使用请先联系授权
【最后更新】2020年10月28日
【相关信息参考下列地址】
【网    站】http://www.lqist.cn
【淘宝店铺】http://longqiu.taobao.com
------------------------------------------------
【dev.env.】AURIX Development Studio1.2.2及以上版本
【Target 】 TC2/3xx
【Crystal】 20.000Mhz
【SYS PLL】 200/300MHz
________________________________________________________________
基于iLLD_1_0_1_11_0底层程序,
使用例程的时候，建议采用没有空格的英文路径，
=================================================================
程序配套视频地址：https://space.bilibili.com/95313236
QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ*/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <LQ_CAMERA.h>

#include <LQ_DMA.h>
#include <LQ_GPIO_LED.h>
#include <LQ_GPIO_KEY.h>
#include <LQ_GTM.h>
#include <LQ_TFT18.h>
#include <IfxCpu.h>
#include <LQ_ADC.h>
#include <LQ_CCU6.h>
#include <LQ_STM.h>
#include <Main.h>
#include <Platform_Types.h>
#include <LQ_MotorServo.h>
#include <LQ_Inductor.h>
#include <LQ_GPT12_ENC.h>
#include "LQ_MT9V034.h"
#include "LQ_ImageProcess.h"
#include <stdbool.h>
#include <math.h>
/*************************************************************************
 *  函数名称：void TFT_Show_Camera_Info(void)
 *  功能说明：显示各种所需信息
 *  参数说明：无
 *  函数返回：无
 *  修改时间：2020年11月18日
 *  备    注：
 *************************************************************************/

void roundabout();
int ruhuan_flag=0;//进入环岛的标记
int yuanhuan_flag1=0;//圆环第一阶段的标志 看到一个出口和入口
int yuanhuan_flag2=0;//圆环第二阶段的标志 只看到入口
int yuanhuan_flag3=0;//圆环第三阶段的标志 看不到入口只有直线和弯道 开始补线
int yuanhuan_flag4=0;//圆环第四阶段的标志 看到出口
int yuanhuan_flag5=0;//圆环第五阶段的标志 走完了 完成
int Bin_image[60][94];//图像的二维数组
int huandao_flag = 0;  //环岛的标志 出环岛之后才变成0
int continueleftrukou1;//左边界连续 判断出第一个入口
int continueleftrukou2;//判断出口
void buxian();

void TFT_Show_Camera_Info (void)
{
    char txt[16] = "X:";

    sint16 mps = 0, dmm = 0;    // 速度：m/s,毫米数值
    sint16 pulse100 = 0;
    uint16 bat = 0;

    dmm = (sint16) (RAllPulse * 100 / 579);         // 龙邱512带方向编码器1米5790个脉冲，数值太大，除以100
    pulse100 = (sint16) (RAllPulse / 100);
    sprintf(txt, "AP:%05d00", pulse100);           //
    TFTSPI_P8X16Str(3, 4, txt, u16RED, u16BLUE);   // 显示赛道偏差参数

    NowTime = (STM_GetNowUs(STM0) - NowTime) / 1000;  // 获取STM0 当前时间，得到毫秒
    mps = (sint16) (dmm / (NowTime / 1000));          // 计算速度mm/s
    // TFTSPI_Road(18, 0, LCDH, LCDW, (unsigned char *)Image_Use); // TFT1.8动态显示摄像头灰度图像
    TFTSPI_BinRoad(18, 0, LCDH, LCDW, (unsigned char *) Bin_Image);  // TFT1.8动态显示摄像头二进制图像
    sprintf(txt, "%04d,%04d,%04d", OFFSET0, OFFSET1, OFFSET2);
    TFTSPI_P8X16Str(0, 5, txt, u16RED, u16BLUE);       // 显示赛道偏差参数
    BatVolt = ADC_Read(ADC7);  // 刷新电池电压
    bat = BatVolt * 11 / 25;  // x/4095*3.3*100*5.7
    sprintf(txt, "B:%d.%02dV %d.%02dm/s", bat / 100, bat % 100, mps / 1000, (mps / 10) % 100);  // *3.3/4095*3
    TFTSPI_P8X16Str(0, 6, txt, u16WHITE, u16BLUE);   // 字符串显示
    // 电机和舵机参数显示
    sprintf(txt, "Sv:%04d Rno:%d", ServoDuty, CircleNumber);
    TFTSPI_P8X16Str(1, 7, txt, u16RED, u16BLUE);     // 显示舵机，电机1，编码器1数值
    sprintf(txt, "M1:%04d, M2:%04d ", MotorDuty1, MotorDuty2);
    TFTSPI_P8X16Str(0, 8, txt, u16RED, u16BLUE);     // 电机1-2数值
    sprintf(txt, "E1:%04d, E2:%04d ", ECPULSE1, ECPULSE2);
    TFTSPI_P8X16Str(0, 9, txt, u16RED, u16BLUE);     // 编码器1-2数值
}
/*************************************************************************
 *  函数名称：void CameraCar(void)
 *  功能说明：电磁车双电机差速控制
 -->1.入门算法：简单的分段比例控制算法，教学演示控制算法；
 2.进阶算法：PID典型应用控制算法，教学演示控制算法；
 3.高端算法：改进粒子群协同控制算法；
 *  参数说明：无
 *  函数返回：无
 *  修改时间：2020年10月28日
 *  备    注：驱动2个电机
 *************************************************************************/

void CameraCar(void)
{
    // 摄像头初始化
    CAMERA_Init(50);
    MotorInit();
    TFTSPI_P8X16Str(2, 0, "LQ 9V034 Car", u16RED, u16GREEN);
    TFTSPI_P8X16Str(1, 2, "K2 Show Video77", u16RED, u16GREEN);
    delayms(500);
    short duty = 1500; // 900时的速度很慢

    // 切记CPU0,CPU1...不可以同时开启屏幕显示，否则冲突不显示
    mutexCpu0TFTIsOk = 0; // CPU1： 0占用/1释放 TFT
    // CircleNumber = SetCircleNum();  // 设置需要进入圆环的个数；

    // 。根据需要设置出入库，出库是固定执行，
    // 。入库需要干簧管和外部中断配合实现
    // 。本例程中，干簧管在通过圆环后开启，不会出现起跑触发的可能性
    // OutInGarage(OUT_GARAGE, ReadOutInGarageMode()); // 测试出库，拨码在上左侧出入库，反之右侧出入库
    // OutInGarage(IN_GARAGE,ReadOutInGarageMode());  // 测试入库

    TFTSPI_CLS(u16BLUE); // 清屏
    // 切记CPU0,CPU1...不可以同时开启屏幕显示，否则冲突不显示
    mutexCpu0TFTIsOk = 1;                // CPU1： 0占用/1释放 TFT
    MotorCtrl4w(duty, duty, duty, duty); // 电机PWM固定功率输出

    RAllPulse = 0;                // 全局变量，脉冲计数总数
    NowTime = STM_GetNowUs(STM0); // 获取STM0 当前时间
    sint16 tduty=1300;
    sint16 sduty_offset=0;

    char tstr[10];
    while (1)
    {
        LED_Ctrl(LED1, RVS); // LED闪烁 指示程序运行状态
        if (Camera_Flag == 2)
        {
            Camera_Flag = 0;    // 清除摄像头采集完成标志位  如果不清除，则不会再次采集数据
            Get_Use_Image();    // 取出赛道及显示所需图像数据
            Get_Bin_Image(0);   // 转换为01格式数据，0、1原图；2、3边沿提取
            Bin_Image_Filter(); // 滤波，三面被围的数据将被修改为同一数值

            Seek_Road_Edge();
            buxian();
            TFTSPI_BinRoad(0, 0, LCDH, LCDW, (unsigned char *)Bin_Image);
            sprintf(tstr,"OFFSET0: %d",OFFSET0);
            TFTSPI_P8X16Str(1, 4, tstr, u16RED, u16GREEN);
            sprintf(tstr,"OFFSET1: %d",OFFSET1);
            TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);
            sprintf(tstr,"OFFSET2: %d",OFFSET2);
            TFTSPI_P8X16Str(1, 6, tstr, u16RED, u16GREEN);
            // 通过黑白区域面积差计算赛道偏差值


            // 计算赛道偏差值，系数越大打角越早，数值跟舵机的范围有关，此处为±160左右，默认为7，
            sduty_offset=(OFFSET0 + OFFSET1 + OFFSET2) * 1 / 3;
//            if((OFFSET0>0&&OFFSET1<0)&&(OFFSET0<0&&OFFSET1>0)){
//                sduty_offset+=OFFSET0*1.2;
//            }
//            if((sduty_offset>=250||sduty_offset<=-250)&&(sduty_offset<300||sduty_offset>-300)){
//                sduty_offset=0.95*sduty_offset;
//            }
//            else if((sduty_offset>=300||sduty_offset<=-300)&&(sduty_offset<350||sduty_offset>-350)){
//                sduty_offset=0.90*sduty_offset;
//            }
//            else if((sduty_offset>=350||sduty_offset<=-350)&&(sduty_offset<400||sduty_offset>-400)){
//                sduty_offset=0.83*sduty_offset;
//            }
//            else if((sduty_offset>=400||sduty_offset<=-400)){
//                sduty_offset=0.78*sduty_offset;
//            }
            ServoDuty = Servo_Center_Mid - sduty_offset;

            ServoCtrl(ServoDuty); // 舵机PWM输出，转向

//             SPEED正负标识方向，负数为正向
             MotorDuty1 = MtTargetDuty + ECPULSE1 * 4 - (OFFSET1 + OFFSET2 + OFFSET2) / 10;        // 电机PWM
             MotorDuty2 = MtTargetDuty - ECPULSE2 * 4 + (OFFSET1 + OFFSET2 + OFFSET2) / 10;        // 双电机差分，需要去掉abs

            MotorCtrl(tduty, tduty); // 四轮电机驱动
                                   // TFT_Show_Camera_Info();
        }
        if (Game_Over)
        {
            OutInGarage(IN_GARAGE, ReadOutInGarageMode());
        }
    }
}
int Bisa_variance(int a[])
{
    int i;
    int avg=0;
    int result=0;
    for(i=0;i<60;i++)
    {
      avg=avg+a[i];
    }
    avg=avg/60;
    for(i=0;i<60;i++)
    {
        result=(a[i]-avg)*(a[i]-avg);
    }
    result=sqrt(result/60);
    return result;
}
//
int My_Abs(int a, int b)
{

            if ((a - b) > 0)
                return ((int)(a - b));
            else return ((int)(b - a));
}
//左右线连续开始
void continuepanduan()
{
    int i = 0;
    continueleftrukou1 = 1;
    continueleftrukou2 = 1;
     //如果所有行中出现大于5的跳变，认为不连续
     //如果第15行边线仍不在1-185范围内，认为不连续
        for (i = 20; i <= 60; i++)
        {
            if (My_Abs(Road_Left[i], Road_Left[i + 1]) > 5)
            {
                continueleftrukou1 = 0;//出口标志
                break;
            }
            if (Road_Left[30]==0)
            {
                continueleftrukou1 = 0;
                break;
            }
        }
        for(i=0;i<30;i++)
        {
            if (My_Abs(Road_Left[i], Road_Left[i + 1]) > 5)
            {
                continueleftrukou2 = 0;//入口找到了
                break;
            }
            if(Road_Left[15]==0)
            {
                continueleftrukou2 = 0;//入口找到了
                break;
            }
        }

}
bool left_edge_circle()//判断是圆环的条件第一阶段
{
    bool result=false;
    int i;
    int flag=0;
    for(i=20;i<45;i++)
    {
        if(Road_Left[i]==0)
        {
          flag++;
        }
    }
    if(flag>16)
    {
        result=true;
    }
    return result;
}
bool left_circle_third()//第三阶段图像的判断
{
    int i;
    int flag=0;
    int continue_left=0;//判断第三阶段的一个标志
   for(i=10;i<60;i++)
   {
      flag++;
   }
   for(i=0;i<20;i++)
   {
      if(My_Abs(Road_Left[i], Road_Left[i + 1]) > 5)
      {
          continue_left=1;
      }
   }
   if(flag>45&&continue_left==1)
   {
     return true;
   }
   return false;
}
bool left_circle_forth()//第四阶段的判断 左右边界都看不到
{
    int i;
    int flag=0;
    for(i=0;i<60;i++)
    {
        if(Road_Left[i]==0&&Road_Right[i]!=0)
        {
            flag++;
        }
    }
    if(flag>45)
    {
        return true;
    }
    return false;
}
void buxian()//补线 入环
{
  int x1,x2,y1,y2;//两个点坐标
  int i;
  for(int i=0;i<30;i++)
  {
      if(My_Abs(Road_Left[i], Road_Left[i + 1]) > 5)
      {
          x1=i;
          y1=Road_Left[i];
          break;
      }
  }
  x2=50;
  y2=Road_Left[50];
  for(i=x1;i<x2;i++)
  {
      Bin_image[i][Road_Left[i]]=0;
  }
  int k=(y1-y2)/(x1-x2);

  for(int i=x1;i<x2;i++)
  {
      Bin_image[i][k*i]=2;
    }
}

void chuhuan()//出环
{
  int x1,x2,y1,y2;//两个点坐标
  int i;
  for(int i=0;i<40;i++)
  {
      if(My_Abs(Road_Left[i], Road_Left[i + 1]) > 5)
      {
          x1=i;
          y1=Road_Left[i];
          break;
      }
  }
    x2=35;
  y2=Road_Left[35];
  for(i=x1;i<x2;i++)
  {
      Bin_image[i][Road_Left[i]]=0;
  }
  int k=(y1-y2)/(x1-x2);

  for(int i=x1;i<x2;i++)
  {
      Bin_image[i][k*i]=2;
    }
}

void roundabout()
{
    continuepanduan();//判断左边界是否连续
    if((continueleftrukou1==0&&continueleftrukou2==0)||left_edge_circle())
    {
        yuanhuan_flag1=1;
        continueleftrukou1=1;
        continueleftrukou2=1;
    }//第一阶段
    continuepanduan();//看第二阶段
    if(yuanhuan_flag1&&continueleftrukou1==0&&continueleftrukou2==1)
    {
        yuanhuan_flag2=1;
    }//第二阶段
    if((yuanhuan_flag1&&yuanhuan_flag2)||left_circle_third())
    {
        yuanhuan_flag3=1;
        buxian();
        ServoDuty=1900;
        ServoCtrl(ServoDuty);
    }
    if((yuanhuan_flag1&&yuanhuan_flag2&&yuanhuan_flag3)||left_circle_forth())
    {
        yuanhuan_flag4=1;//出环
        chuhuan();
        ServoDuty=1900;
        ServoCtrl(ServoDuty);
    }
    if(yuanhuan_flag1&&yuanhuan_flag2&&yuanhuan_flag3&&yuanhuan_flag4)
    {
       //正常走线
       yuanhuan_flag5=1;//完成
       yuanhuan_flag1=0;
       yuanhuan_flag2=0;
       yuanhuan_flag4=0;
    }
}

