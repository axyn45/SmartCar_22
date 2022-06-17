/*LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
锟斤拷平    台锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟杰科硷拷TC2/3xx锟斤拷锟侥帮�??
锟斤拷锟斤拷    写锟斤拷chiusir
锟斤拷E-mail锟斤拷chiusir@163.com
锟斤拷锟斤拷锟斤拷锟芥本锟斤拷V1.1 锟斤拷权锟斤拷锟叫ｏ拷锟斤拷位使锟斤拷锟斤拷锟斤拷锟斤拷系锟斤拷�??
锟斤拷锟斤拷锟斤拷锟铰★�??2020锟斤�??10锟斤�??28锟斤�??
锟斤拷锟斤拷锟斤拷锟较拷慰锟斤拷锟斤拷械锟街凤拷锟�??
锟斤拷锟斤拷    站锟斤拷http://www.lqist.cn
锟斤拷锟皆憋拷锟斤拷锟教★拷http://longqiu.taobao.com
------------------------------------------------
锟斤拷dev.env.锟斤拷AURIX Development Studio1.2.2锟斤拷锟斤拷锟较版本
锟斤拷Target 锟斤�?? TC2/3xx
锟斤拷Crystal锟斤�?? 20.000Mhz
锟斤拷SYS PLL锟斤�?? 200/300MHz
________________________________________________________________
锟斤拷锟斤拷iLLD_1_0_1_11_0锟阶诧拷锟斤拷锟�??,
使锟斤拷锟斤拷锟教碉拷时锟津，斤拷锟斤拷锟斤拷锟矫伙拷锌崭锟斤拷英锟斤拷路锟斤拷锟斤�??
=================================================================
锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷频锟斤拷址锟斤拷https://space.bilibili.com/95313236
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
 *  锟斤拷锟斤拷锟斤拷锟狡ｏ拷void TFT_Show_Camera_Info(void)
 *  锟斤拷锟斤拷说锟斤拷锟斤拷锟斤拷示锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷�??
 *  锟斤拷锟斤拷说锟斤拷锟斤拷锟斤拷
 *  锟斤拷锟斤拷锟斤拷锟截ｏ拷锟斤拷
 *  锟睫革拷时锟戒：2020锟斤�??11锟斤�??18锟斤�??
 *  锟斤�??    注锟斤拷
 *************************************************************************/

void roundabout();
int ruhuan_flag=0;//锟斤拷锟诫环锟斤拷锟侥憋拷锟�??
int yuanhuan_flag1=0;//圆锟斤拷锟斤拷一锟阶段的憋拷�?? 锟斤拷锟斤拷一锟斤拷锟斤拷锟节猴拷锟斤拷锟�??
int yuanhuan_flag2=0;//圆锟斤拷锟节讹拷锟阶段的憋拷�?? 只锟斤拷锟斤拷锟斤拷锟�
int yuanhuan_flag3_1=0;
int yuanhuan_flag3=0;//圆锟斤拷锟斤拷锟斤拷锟阶段的憋拷�?? 锟斤拷锟斤拷锟斤拷锟斤拷锟街伙拷锟街憋拷吆锟斤拷锟斤�?? 锟斤拷始锟斤拷锟斤拷
int yuanhuan_flag4=0;//圆锟斤拷锟斤拷锟侥阶段的憋拷�?? 锟斤拷锟斤拷锟斤拷锟斤拷
int yuanhuan_flag5=0;//圆锟斤拷锟斤拷锟斤拷锥蔚谋锟街� 锟斤拷锟斤拷锟斤�?? 锟斤拷锟�??
int Bin_image[60][94];//图锟斤拷亩锟轿拷锟斤拷锟�
int huandao_flag = 0;  //锟斤拷锟斤拷锟侥憋拷�?? 锟斤拷锟斤拷锟斤拷之锟斤拷疟锟斤�??0
int continueleftrukou1;//锟斤拷呓锟斤拷锟斤拷锟� 锟叫断筹拷锟斤拷一锟斤拷锟斤拷锟�
int continueleftrukou2;//锟叫断筹拷锟斤拷
void find_inflection_point();
void find_point();
struct point
{
        int x;
        int y;
};
struct point p1,p2,p3,p4;//锟斤拷锟斤拷锟揭拐碉�??
void TFT_Show_Camera_Info (void)
{
    char txt[16] = "X:";

    sint16 mps = 0, dmm = 0;    // 锟劫度ｏ拷m/s,锟斤拷锟斤拷锟斤拷�?
    sint16 pulse100 = 0;
    uint16 bat = 0;

    dmm = (sint16) (RAllPulse * 100 / 579);         // 锟斤拷锟斤拷512锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�??1锟斤�??5790锟斤拷锟斤拷锟藉，锟斤拷值太锟襟，筹拷锟斤拷100
    pulse100 = (sint16) (RAllPulse / 100);
    sprintf(txt, "AP:%05d00", pulse100);           //
    TFTSPI_P8X16Str(3, 4, txt, u16RED, u16BLUE);   // 锟斤拷示锟斤拷锟斤拷偏锟斤拷锟斤拷锟�??

    NowTime = (STM_GetNowUs(STM0) - NowTime) / 1000;  // 锟斤拷取STM0 锟斤拷前时锟戒，锟矫碉拷锟斤拷锟斤拷
    mps = (sint16) (dmm / (NowTime / 1000));          // 锟斤拷锟斤拷锟劫讹拷mm/s
    // TFTSPI_Road(18, 0, LCDH, LCDW, (unsigned char *)Image_Use); // TFT1.8锟斤拷态锟斤拷示锟斤拷锟斤拷头锟揭讹拷图锟斤拷
    TFTSPI_BinRoad(18, 0, LCDH, LCDW, (unsigned char *) Bin_Image);  // TFT1.8锟斤拷态锟斤拷示锟斤拷锟斤拷头锟斤拷锟斤拷锟斤拷图锟斤�??
    sprintf(txt, "%04d,%04d,%04d", OFFSET0, OFFSET1, OFFSET2);
    TFTSPI_P8X16Str(0, 5, txt, u16RED, u16BLUE);       // 锟斤拷示锟斤拷锟斤拷偏锟斤拷锟斤拷锟�??
    BatVolt = ADC_Read(ADC7);  // 刷锟铰碉拷氐锟窖�??
    bat = BatVolt * 11 / 25;  // x/4095*3.3*100*5.7
    sprintf(txt, "B:%d.%02dV %d.%02dm/s", bat / 100, bat % 100, mps / 1000, (mps / 10) % 100);  // *3.3/4095*3
    TFTSPI_P8X16Str(0, 6, txt, u16WHITE, u16BLUE);   // 锟街凤拷锟斤拷锟斤拷�??
    // 锟斤拷锟斤拷投锟斤拷锟斤拷锟斤拷锟斤拷示
    sprintf(txt, "Sv:%04d Rno:%d", ServoDuty, CircleNumber);
    TFTSPI_P8X16Str(1, 7, txt, u16RED, u16BLUE);     // 锟斤拷示锟斤拷锟斤拷锟斤拷锟斤拷1锟斤拷锟斤拷锟斤拷锟斤拷1锟斤拷�?
    sprintf(txt, "M1:%04d, M2:%04d ", MotorDuty1, MotorDuty2);
    TFTSPI_P8X16Str(0, 8, txt, u16RED, u16BLUE);     // 锟斤拷锟�??1-2锟斤拷�?
    sprintf(txt, "E1:%04d, E2:%04d ", ECPULSE1, ECPULSE2);
    TFTSPI_P8X16Str(0, 9, txt, u16RED, u16BLUE);     // 锟斤拷锟斤拷锟斤�??1-2锟斤拷�?
}
/*************************************************************************
 *  锟斤拷锟斤拷锟斤拷锟狡ｏ拷void CameraCar(void)
 *  锟斤拷锟斤拷说锟斤拷锟斤拷锟斤拷懦锟剿拷锟斤拷锟斤拷锟劫匡拷锟斤拷
 -->1.锟斤拷锟斤拷锟姐法锟斤拷锟津单的分段憋拷锟斤拷锟斤拷锟斤拷锟姐法锟斤拷锟斤拷学锟斤拷示锟斤拷锟斤拷锟姐法锟斤�??
 2.锟斤拷锟斤拷锟姐法锟斤拷PID锟斤拷锟斤拷应锟矫匡拷锟斤拷锟姐法锟斤拷锟斤拷学锟斤拷示锟斤拷锟斤拷锟姐法锟斤拷
 3.锟竭讹拷锟姐法锟斤拷锟侥斤拷锟斤拷锟斤拷群协同锟斤拷锟斤拷锟姐法锟斤�??
 *  锟斤拷锟斤拷说锟斤拷锟斤拷锟斤拷
 *  锟斤拷锟斤拷锟斤拷锟截ｏ拷锟斤拷
 *  锟睫革拷时锟戒：2020锟斤�??10锟斤�??28锟斤�??
 *  锟斤�??    注锟斤拷锟斤拷锟斤拷2锟斤拷锟斤拷锟�
 *************************************************************************/

void CameraCar(void)
{
    // 锟斤拷锟斤拷头锟斤拷始锟斤拷
    CAMERA_Init(50);
    MotorInit();
    TFTSPI_P8X16Str(2, 0, "LQ 9V034 Car", u16RED, u16GREEN);
    TFTSPI_P8X16Str(1, 2, "K2 Show Video77", u16RED, u16GREEN);
    delayms(500);
    short duty = 1500; // 900时锟斤拷锟劫度猴拷锟斤拷

    // 锟叫硷拷CPU0,CPU1...锟斤拷锟斤拷锟斤拷同时锟斤拷锟斤拷锟斤拷幕锟斤拷示锟斤拷锟斤拷锟斤拷锟酵伙拷锟斤拷锟绞�
    mutexCpu0TFTIsOk = 0; // CPU1锟斤�?? 0占锟斤拷/1锟酵凤拷 TFT
    // CircleNumber = SetCircleNum();  // 锟斤拷锟斤拷锟斤拷要锟斤拷锟斤拷圆锟斤拷锟侥革拷锟斤拷锟斤拷

    // 锟斤拷锟斤拷锟斤拷锟斤拷要锟斤拷锟矫筹拷锟斤拷猓拷锟斤拷锟斤拷枪潭锟街达拷校锟�??
    // 锟斤拷锟斤拷锟斤拷锟揭拷苫晒芎锟斤拷獠匡拷卸锟斤拷锟斤拷实锟斤�??
    // 锟斤拷锟斤拷锟斤拷锟斤拷锟叫ｏ拷锟缴簧癸拷锟斤拷通锟斤拷圆锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷艽锟斤拷锟斤拷目锟斤拷锟斤拷锟�
    // OutInGarage(OUT_GARAGE, ReadOutInGarageMode()); // 锟斤拷锟皆筹拷锟解，锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷猓拷锟街拷也锟斤拷锟斤拷锟�??
    // OutInGarage(IN_GARAGE,ReadOutInGarageMode());  // 锟斤拷锟斤拷锟斤拷锟�??

    TFTSPI_CLS(u16BLUE); // 锟斤拷锟斤拷
    // 锟叫硷拷CPU0,CPU1...锟斤拷锟斤拷锟斤拷同时锟斤拷锟斤拷锟斤拷幕锟斤拷示锟斤拷锟斤拷锟斤拷锟酵伙拷锟斤拷锟绞�
    mutexCpu0TFTIsOk = 1;                // CPU1锟斤�?? 0占锟斤拷/1锟酵凤拷 TFT
    MotorCtrl4w(duty, duty, duty, duty); // 锟斤拷锟絇WM锟教讹拷锟斤拷锟斤拷锟斤拷锟�??

    RAllPulse = 0;                // 全锟街憋拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�
    NowTime = STM_GetNowUs(STM0); // 锟斤拷取STM0 锟斤拷前时锟斤拷
    sint16 tduty=1300;
    sint16 sduty_offset=0;

    char tstr[10];
    while (1)
    {
        LED_Ctrl(LED1, RVS); // LED锟斤拷烁 指示锟斤拷锟斤拷锟斤拷锟斤拷状�?
        if (Camera_Flag == 2)
        {
            Camera_Flag = 0;    // 锟斤拷锟斤拷锟斤拷锟酵凤拷杉锟斤拷锟缴憋拷志�??  锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟津不伙拷锟劫次采硷拷锟斤拷锟斤拷
            Get_Use_Image();    // 取锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷示锟斤拷锟斤拷图锟斤拷锟斤拷锟斤�??
            Get_Bin_Image(0);   // 转锟斤拷�??01锟斤拷式锟斤拷锟捷ｏ�??0锟斤�??1原图锟斤�??2锟斤�??3锟斤拷锟斤拷锟斤拷取
            Bin_Image_Filter(); // 锟剿诧拷锟斤拷锟斤拷锟芥被围锟斤拷锟斤拷锟捷斤拷锟斤拷锟睫革拷为同一锟斤拷�?
            Seek_Road_Edge();
            roundabout();
            servo_control();
            if(yuanhuan_flag3)
            {
                find_inflection_point();
                find_point();
                dots2line(p1.y,p1.x,p2.y,p2.x,2);
            }
            TFTSPI_BinRoad(0, 0, LCDH, LCDW, (unsigned char *)Bin_Image);
//            sprintf(tstr,"left_t: %d %d",Road_Left_Top[0],Road_Left_Top[1]);
//            TFTSPI_P8X16Str(1, 4, tstr, u16RED, u16GREEN);
//
//            sprintf(tstr,"right_t: %d %d",Road_Right_Top[0],Road_Right_Top[1]);
//            TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);
//
//
//            sprintf(tstr,"left_b: %d %d",Road_Left_Bottom[0],Road_Left_Bottom[1]);
//            TFTSPI_P8X16Str(1, 6, tstr, u16RED, u16GREEN);
//
////            sprintf(tstr,"right_b: %d %d",Road_Right_Bottom[0],Road_Right_Bottom[1]);
//            sprintf(tstr,"l:%d %d %d %d %d",line_elements[59].left,line_elements[49].left,line_elements[39].left,line_elements[29].left,line_elements[9].left);
//            TFTSPI_P8X16Str(0, 7, tstr, u16RED, u16GREEN);



//             sprintf(tstr,"left_b: %d %d",Road_Left_Bottom[0],Road_Left_Bottom[1]);
//             TFTSPI_P8X16Str(1, 6, tstr, u16RED, u16GREEN);

// //            sprintf(tstr,"right_b: %d %d",Road_Right_Bottom[0],Road_Right_Bottom[1]);
//             sprintf(tstr,"l:%d %d %d %d %d",line_elements[59].left,line_elements[49].left,line_elements[39].left,line_elements[29].left,line_elements[9].left);
//             TFTSPI_P8X16Str(0, 7, tstr, u16RED, u16GREEN);


//            TFTSPI_BinRoad(0, 0, LCDH, LCDW, (unsigned char *)Bin_Image);
//             dots2line(3,3,60,25,1);
//              TFTSPI_BinRoad(0, 0, LCDH, LCDW, (unsigned char *)Bin_Image);
// //             sint16 break_line=servo_control();
//              sprintf(tstr,"%d",servo_control());
//              TFTSPI_P8X16Str(1, 4, tstr, u16RED, u16GREEN);

//              sprintf(tstr,"left_t: %d %d",Road_Left_Top[0],Road_Left_Top[1]);
//              TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);

//              sprintf(tstr,"right_t: %d %d",Road_Right_Top[0],Road_Right_Top[1]);
//              TFTSPI_P8X16Str(1, 6, tstr, u16RED, u16GREEN);

            // 通锟斤拷锟节帮拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷偏锟斤拷�??


            // 锟斤拷锟斤拷锟斤拷锟斤拷偏锟斤拷值锟斤拷系锟斤拷越锟斤拷锟斤拷越锟界，锟斤拷值锟斤拷锟斤拷锟斤拷姆锟轿э拷泄兀锟斤拷舜锟轿拷锟�160锟斤拷锟揭ｏ拷默锟斤拷为7锟斤�??
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

            ServoCtrl(ServoDuty); // 锟斤拷锟絇WM锟斤拷锟斤拷锟阶拷锟�

//             SPEED锟斤拷锟斤拷锟斤拷识锟斤拷锟津，革拷锟斤拷为锟斤拷锟斤拷
             MotorDuty1 = MtTargetDuty + ECPULSE1 * 4 - (OFFSET1 + OFFSET2 + OFFSET2) / 10;        // 锟斤拷锟絇WM
             MotorDuty2 = MtTargetDuty - ECPULSE2 * 4 + (OFFSET1 + OFFSET2 + OFFSET2) / 10;        // 双锟斤拷锟斤拷锟街ｏ拷锟斤拷要去锟斤拷abs

            MotorCtrl(tduty, tduty); // 锟斤拷锟街碉拷锟斤拷锟斤拷锟�??
                                   // TFT_Show_Camera_Info();
        }
//        if (Game_Over)
//        {
//            OutInGarage(IN_GARAGE, ReadOutInGarageMode());
//        }
    }
}
int My_Abs(int a, int b)//锟斤拷锟斤拷锟街�??
{

            if ((a - b) > 0)
                return ((int)(a - b));
            else return ((int)(b - a));
}
//锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷�??

int Right_con;//锟揭憋拷锟斤拷锟斤拷锟侥憋拷�??
void right_continue()//锟揭边斤拷锟斤拷锟斤拷锟叫讹�??
{
     int i=0;
     Right_con=1;
     for(i=0;i<60;i++)
     {
         if(My_Abs(line_elements[i].left, line_elements[i + 1].left) > 5)
         {

         }
     }

}
bool no_black()//锟斤拷锟斤拷锟阶讹拷 锟铰凤拷没锟叫猴拷色锟斤拷锟斤拷
{
   int flag=0;
   for(int i=60;i>30;i--)
   {
       for(int j=0;j<40;j++)
       {
           if(Bin_Image[i][j]==0)
           {
               flag++;
           }
       }
   }
   if(flag<100)
   {
       return true;
   }
   return false;
}
bool lose_left_line()//锟斤拷叩谋呓锟斤拷叨锟斤拷锟斤拷锟�
{
    bool ok=false;
    int flag=0;
    for(int i=60;i>30;i--)
    {
        if(line_elements[i].left==-1)
        {
            flag++;
        }
    }
    if(flag>15)
    {
        ok=true;
    }
    return ok;
}
bool have_black_area()//锟叫讹拷锟斤拷没锟斤拷圆锟斤拷锟斤拷一锟斤拷暮锟缴拷锟斤拷锟�??
{
    //锟斤拷锟斤拷Bin_Image锟斤拷锟斤拷锟叫讹拷
    int flag=0;
    for(int i=20;i<45;i++)
    {
        for(int j=0;j<50;j++)
        {
            if(Bin_Image[i][j]==0)
            {
                flag++;
            }
        }
    }
    if(flag>250)
    {
        return true;
    }
    return false;
}

void first_stage()//圆锟斤拷锟矫碉拷一锟阶段革拷锟捷匡拷锟斤拷锟叫讹拷
{
    int turn_wid=0;//锟斤拷路锟戒化锟斤拷锟�
    int turn_narrow=0;
    int turn_nar1=0;
    for(int i=60;i>50;i--)
    {
        //锟斤拷锟斤拷路锟侥变化锟斤拷锟�
        if(line_elements[i].width>line_elements[i+1].width)
        {
            turn_nar1=1;

        }
    }
//    int flag=0;
    for(int i=30;i>0;i--)
    {
        if(line_elements[i].width>line_elements[i+1].width)
               {
                   turn_narrow=1;

               }
    }
    for(int j=50;j>30;j--)
    {
        if(line_elements[j].width<line_elements[j+1].width)
        {
            turn_wid=1;
        }
    }
    //锟揭边斤拷锟斤拷直锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�??1
    if(turn_wid&&turn_narrow&&turn_nar1&&!have_black_area()&&!lose_left_line()&&!yuanhuan_flag2)//锟斤拷锟杰碉拷锟斤拷
    {
        yuanhuan_flag1=1;
    }
}
bool turn_wid_nar()
{
    int turn_nar1=0;
    int turn_nar=0;
    for(int i=60;i>10;i--)
    {
        //锟斤拷锟斤拷路锟侥变化锟斤拷锟�
        if(My_Abs(line_elements[i].width,line_elements[i+10].width)>20)
        {
            turn_nar1=1;

        }
        if(line_elements[i].width>line_elements[i+1].width)
        {
            turn_nar=1;
        }
    }
   if(turn_nar1&&turn_nar)
   {
        return true;
   }
  return false;
}



void second_stage()//锟节讹拷锟阶讹拷锟叫断猴拷锟斤拷
{
  //  int result=Bisa_variance(Road_Right);
     if(lose_left_line()&&have_black_area()&&yuanhuan_flag1)//锟斤拷锟斤拷锟剿诧拷锟斤拷锟叫猴拷色锟斤拷锟斤拷
     {
         yuanhuan_flag2=1;
         yuanhuan_flag1=0;
     }
}
void find_inflection_point()//锟斤拷圆锟斤拷时锟斤拷墓盏锟�?? 锟斤拷锟斤拷锟斤拷锟斤拷呓锟斤拷锟斤拷小�??
{
    p1.x=0;
    p1.y=50;
    for(int i=1;i<40;i++)
    {
      if(line_elements[i].left<p1.y&&line_elements[i].left!=-1)
      {
          p1.x=i;
          p1.y=line_elements[i].left;//锟揭碉拷锟斤拷偷牡锟�??
      }
    }
//        char tstr[10];
//        sprintf(tstr,"p1 x: %d",p1.x);
//        TFTSPI_P8X16Str(1, 4, tstr, u16RED, u16GREEN);
//        sprintf(tstr,"p1 y: %d",p1.y);
//        TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);

}
void find_point()
{
   p2.x=0;
   p2.y=line_elements[0].right;
   for(int i=0;i<60;i++)
   {
     if(line_elements[i].right>p2.y&&line_elements[i].right!=94)
     {
         p2.x=i;
         p2.y=line_elements[i].right;//锟揭碉拷锟斤拷牡锟�
     }
   }
//   char tstr[10];
//   sprintf(tstr,"p2 x: %d",p2.x);
//   TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);
//   sprintf(tstr,"p2 y: %d",p2.y);
//   TFTSPI_P8X16Str(1, 6, tstr, u16RED, u16GREEN);
}
void buxian(struct point po1,struct point po2)//锟斤拷锟斤拷 锟诫�??
{
  int x1,x2,y1,y2;//锟斤拷锟斤拷锟斤拷锟斤拷锟斤�??
  x1=po1.x;
  y1=po1.y;
  y2=po2.y;
  x2=po2.x;
  int k=(y1-y2)/(x1-x2);

  for(int i=x1;i<x2;i++)
  {
      line_elements[i].right=k*i;//锟竭界函锟斤拷也锟斤拷锟斤拷
      Bin_Image[i][k*i]=4;
   }
}
bool is_align()//锟叫边斤拷锟斤拷直锟斤拷
{
    int flag=0;
    for(int i=0;i<60;i++)
    {
        if(My_Abs(line_elements[i].right,line_elements[i+1].right)<3)
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
void third_stage2()
{
    if(lose_left_line()&&yuanhuan_flag2&&no_black()&&!have_black_area()&&is_align())//锟斤拷锟斤拷锟揭撅拷锟斤拷锟剿第讹拷锟阶讹拷 锟斤拷锟铰凤拷没锟叫猴拷色锟斤拷锟斤拷锟斤拷
    {
       yuanhuan_flag3=1;
       yuanhuan_flag2=0;
    }
}
//锟揭憋拷锟角伙拷锟斤�?? 直锟斤拷
void success_in()//锟缴癸拷锟诫环锟侥憋拷志  未锟斤拷锟斤�??
{
   if(yuanhuan_flag3&&lose_left_line()&&!is_align())
   {
       ruhuan_flag=1;
       yuanhuan_flag3=0;
   }
}
void chuhuan()
{

     p3.x=0;
     p3.y=line_elements[0].left;
     for(int i=0;i<60;i++)
     {
        if(line_elements[i].left<p3.y)
         {
             p3.x=i;
             p3.y=line_elements[i].left;//锟揭碉拷锟斤拷偷牡锟�??
         }
       }
     p4.x=0;
     p4.y=line_elements[0].right;
     for(int i=0;i<60;i++)
     {
        if(line_elements[i].right>p4.y)
         {
             p4.x=i;
             p4.y=line_elements[i].right;//锟揭碉拷锟斤拷偷牡锟�??
         }
       }

}
void forth_stage()//锟斤拷锟叫筹拷圆锟斤�??
{
    //int result=Bisa_variance(Road_Right);//锟揭边边斤拷锟狡拷锟街碉拷锟�
    //变窄然后有变�?
    int turn_wid=0;
    int turn_nar=0;
    for(int i=60;i>25;i--)
    {
        if(line_elements[i].width>line_elements[i+1].width)
        {
            turn_nar=1;
        }
    }
    for(int i=30;i>10;i--)
    {
        if(line_elements[i].width<line_elements[i+1].width)
        {
            turn_wid=1;
        }
    }
    if(yuanhuan_flag3&&ruhuan_flag&&turn_wid&&turn_nar&&lose_left_line())
    {
        yuanhuan_flag4=1;
        ruhuan_flag=0;
        // chuhuan();
        // dots2line(p3.x,p3.y,p4.x,p4.y,2);
    }
}
void all_clear()//锟斤拷锟叫憋拷志锟斤拷锟斤拷
{
    yuanhuan_flag1=0;
    yuanhuan_flag2=0;
    yuanhuan_flag3=0;
    yuanhuan_flag4=0;
    yuanhuan_flag5=0;
    ruhuan_flag=0;
}
void fifth_stage()
{
   if(lose_left_line()&&no_black()&&!have_black_area()&&is_align()&&yuanhuan_flag4)//锟斤拷锟斤拷
    {
        //锟截碉拷锟剿筹拷始位锟矫ｏ拷锟斤拷锟斤拷前锟斤拷
       all_clear();//全锟斤拷锟斤拷锟斤拷
    }
}
void roundabout()
{
    //锟斤拷锟矫碉拷一锟阶讹拷锟叫断猴�??
    first_stage();
    second_stage();//锟节讹拷锟阶讹拷
    third_stage2();//锟斤拷锟斤拷锟阶讹拷 没锟叫猴拷色锟斤拷锟斤拷
    char tstr[10];
//    sprintf(tstr,"flag1: %d",yuanhuan_flag1);
//    TFTSPI_P8X16Str(1, 4, tstr, u16RED, u16GREEN);
//    sprintf(tstr,"flag2: %d",yuanhuan_flag2);
//    TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);
    success_in();
    sprintf(tstr,"ruhuan_flag: %d",ruhuan_flag);
    TFTSPI_P8X16Str(1, 6, tstr, u16RED, u16GREEN);
    forth_stage();
    fifth_stage();
    sprintf(tstr,"flag4: %d",yuanhuan_flag4);
    TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);

}


/********************************                  锟斤拷锟斤拷                            *************************************************/

/*
锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟叫讹拷锟斤拷锟斤拷要寻锟揭斤拷锟斤拷锟斤拷锟斤拷时锟斤拷锟斤拷锟斤拷锟秸碉拷锟皆硷拷锟斤拷锟斤拷锟斤拷锟阶诧拷锟斤拷锟角革拷锟斤�??

1.锟揭碉拷锟斤拷锟斤拷锟斤拷锟斤拷时锟斤拷锟斤拷锟斤拷锟秸点：锟斤拷呓锟斤拷锟斤拷锟斤拷缺锟斤拷锟劫憋拷小锟斤�??
同锟揭边斤拷锟斤拷锟斤拷锟饺憋拷小锟斤拷锟斤拷锟揭碉拷锟斤拷   锟斤拷锟斤拷小锟戒化锟斤拷锟角革拷锟姐�?
锟斤拷锟秸碉拷锟斤拷锟斤拷锟斤拷卸锟斤拷锟斤拷锟斤拷锟斤拷呓锟侥讹拷锟斤拷锟斤拷目锟斤拷锟斤拷小锟斤拷一锟斤拷锟斤拷值锟斤拷锟斤拷为状态一锟斤�??

 2.锟斤拷锟斤拷锟阶诧拷锟侥点：锟揭碉拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟秸碉拷螅锟斤拷锟斤拷锟斤拷盏锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟接筹拷锟斤拷2锟斤拷锟斤拷录锟斤拷锟斤�??
 锟斤拷锟斤拷锟皆固讹拷锟斤拷锟斤拷头锟斤拷锟叫硷拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷液诎椎锟斤拷锟斤拷锟斤拷(也锟斤拷锟斤拷锟皆刚诧拷锟斤拷锟秸碉拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤�??2)
 锟斤拷锟揭碉拷锟阶诧拷锟侥碉拷螅锟铰硷拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟秸碉拷1/2锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟街拷锟叫★拷锟揭伙拷锟斤拷锟街碉拷锟斤拷卸锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�??

*/

//extern int Bin_image[60][94];

//锟斤拷锟斤拷盏锟�??
int Left_Point_Row = 0;//锟斤拷盏锟斤拷锟�??
int Left_Point_Col = 0;//锟斤拷盏锟斤拷锟�??
int Left_Point_Flag = 0;//锟角凤拷锟揭碉拷锟斤拷盏锟斤拷志�??
//extern int leftline[60];//锟斤拷呓锟�
void Find_Left_Point()
{
    int i;

    int  Find_Start_Line = 0;
    int  Find_End_Line = 94;

    for (i = Find_End_Line-1; i >= Find_Start_Line; i--)
    {
        if (line_elements[i].left != 0 && line_elements[i-1].left != 0 && line_elements[i+1].left != 0
            && line_elements[i-2].left != 0                       //锟斤拷锟斤拷4锟叫诧拷锟斤拷锟竭ｏ拷锟斤拷锟斤拷锟斤拷4锟叫讹拷小锟斤拷70 178锟侥筹拷70
            && line_elements[i].left < 178 && line_elements[i-1].left < 178 && line_elements[i+1].left < 178
            && line_elements[i-2].left < 178)
        {
            if ((line_elements[i].left - line_elements[i-1].left >= 0) && (line_elements[i].left - line_elements[i-2].left >= 0)
                && (line_elements[i].left - line_elements[i-3].left >= 2)
                && (line_elements[i].left - line_elements[i+1].left >= 0)
                && (line_elements[i].left - line_elements[i+2].left >= 0)
                && (line_elements[i].left - line_elements[i+3].left >= 0)) //锟揭碉拷锟秸碉拷
            {
                Left_Point_Row = i;           //锟斤拷录锟矫拐碉拷锟斤拷锟�
                Left_Point_Col = line_elements[i].left; //锟斤拷录锟矫拐碉拷锟斤拷锟�
                Left_Point_Flag = 1;          //锟斤拷锟斤拷业锟斤拷锟秸碉拷
                break;                              //锟揭碉拷锟剿筹拷
            }
        }
    }
}

//锟斤拷锟揭拐碉拷
int Right_Point_Row = 0;//锟揭拐碉拷锟斤拷
int Right_Point_Col = 0;//锟揭拐碉拷锟斤拷
int Right_Point_Flag = 0;//锟角凤拷锟揭碉拷锟揭拐碉拷锟街疚�??
//extern int rightline[60];//锟斤拷锟揭边斤拷
void Find_Right_Point()
{
    int i;
    int cutCOL = 94;
    int  Find_Start_Line = 0;
    int  Find_End_Line = 94;


    for (i = Find_End_Line-1; i >= Find_Start_Line; i--)
    {
        //锟斤拷锟斤拷扫锟斤拷太远锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�??

        if ((line_elements[i].right != (cutCOL - 1) && line_elements[i-1].right != (cutCOL - 1)
            && line_elements[i-2].right != (cutCOL - 1)
            && line_elements[i-3].right != (cutCOL - 1))
            && (line_elements[i].right > 10 && line_elements[i-1].right > 10
                && line_elements[i+1].right > 10 && line_elements[i-2].right > 10))
            //锟斤拷锟斤拷锟斤拷锟叫诧拷锟斤拷锟斤�??,锟斤拷未为锟剿凤拷止锟斤拷锟戒，锟斤�??4锟叫憋拷锟斤拷锟斤拷锟�10
        {
            if ((line_elements[i].right - line_elements[i+1].right <= 0)
                && (line_elements[i].right - line_elements[i+2].right) <= 0
                && (line_elements[i].right - line_elements[i+3].right) <= 0
                && (line_elements[i].right - line_elements[i-1].right <= 0)
                && (line_elements[i].right - line_elements[i-2].right <= 0)
                && (line_elements[i].right - line_elements[i-3].right <= -2))
            {
                Right_Point_Row = i;           //锟斤拷录锟矫拐碉拷锟斤拷锟�
                Right_Point_Col = line_elements[i].right; //锟斤拷录锟矫拐碉拷锟斤拷锟�
                Right_Point_Flag = 1;          //锟斤拷锟斤拷业锟斤拷夜盏锟�
                break;                              //锟揭碉拷锟剿筹拷
            }
        }
    }

}


/*
锟斤拷锟斤拷锟斤拷锟狡ｏ拷Sancha_judge
锟斤拷锟斤拷锟斤拷锟斤拷: 锟叫讹拷锟斤拷锟斤拷
*/
int point_flag;
int distance;
int Sancha_Num = 0; //锟斤拷锟截斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟剿碉拷偶然锟斤拷锟�
int Sancha_Start_Row = 0;
int Sancha_Start_Col = 0;
int Sancha_Button_Row = 0;//锟斤拷锟斤拷锟叫硷拷撞锟斤拷歉锟斤拷盏锟�??
int Sancha_Button_Col = 0;
int Sancha_Button_Flag = 0;
int Sancha_In_Flag = 0;//锟斤拷锟斤拷锟斤拷锟斤拷�??


int Sancha_Go_Right = 0;
int Sancha_Go_Left = 0;


void Sancha_judge()
{
    int i;
    //  San.Sancha_In_Flag=0;

    Find_Left_Point();
    Find_Right_Point();
    char tstr[10];
    sprintf(tstr,"Right: %d,%d,%d",Right_Point_Row,Right_Point_Col,Right_Point_Flag);
    TFTSPI_P8X16Str(1, 4, tstr, u16RED, u16GREEN);
    sprintf(tstr,"Left: %d,%d,%d",Left_Point_Row,Left_Point_Col,Left_Point_Flag);
    TFTSPI_P8X16Str(1, 5, tstr, u16RED, u16GREEN);
    if (Right_Point_Flag && Left_Point_Flag /* && sum_lost_line < 40 */) //锟斤拷锟斤拷锟铰凤拷锟秸碉拷锟斤拷锟�??
    {
        point_flag = 1;
        Sancha_Start_Row = ((Right_Point_Row + Left_Point_Row) / 2);
        Sancha_Start_Col = ((Right_Point_Col + Left_Point_Col) / 2);
        Sancha_Button_Col = Sancha_Start_Col;
    }
    if (point_flag == 1 /*&& sum_lost_line > 70*/)
    {
      //  Sancha_In_Flag = 1;

        for (i = Sancha_Start_Row; i > 0; i--)//锟斤拷mid
        {
            if ((Bin_image[i][Sancha_Start_Col] == 1)&& (Bin_image[i - 1][Sancha_Start_Col] == 0))
            {
                Sancha_Button_Row = i;
                distance = Sancha_Start_Row - Sancha_Button_Row;
                Sancha_In_Flag = 1;

                if (distance > 0 && distance <= 40 && Sancha_Start_Row > 55)
                {
                    Sancha_Button_Flag = 1;
                    Sancha_In_Flag = 1;
                    //special_LOCK = 1;
                    Sancha_Num++;
                    break;
                }
            }
        }
        if (Sancha_In_Flag == 1)
        {
          // sprintf(tstr,"Mid锟斤�??%d,%d",Sancha_Button_Row,Sancha_Button_Col);
        //   TFTSPI_P8X16Str(1, 5, tstr, u16RED,u16GREEN);
           float k = 0;
           Sancha_Go_Right = 1;
           if (Sancha_Go_Right)//锟斤拷锟斤拷锟斤拷锟斤拷�??  锟斤拷锟较拐碉拷锟斤拷锟斤拷盏锟�??
           {
              k = (Sancha_Button_Col - Left_Point_Col) / (Sancha_Button_Row - Left_Point_Row);
              for (int i = Sancha_Start_Row; i >= Sancha_Button_Row; i++)
              {
                  Bin_Image[i][line_elements[i].left] = 0;
                  line_elements[i].left = i * k + Sancha_Start_Row;
                  Bin_Image[i][line_elements[i].left] = 2;
               }

            }
                           //锟斤拷之前锟斤拷锟叫碉拷锟斤拷锟斤拷锟斤拷氐锟絝lag锟斤拷为0
             Sancha_In_Flag = 0;
             Bin_Image[Left_Point_Row][Left_Point_Col] = 2;
             Bin_Image[Right_Point_Row][Right_Point_Col] = 2;


         }
    }
}


/*
int Sancha_Go_Right = 0;
int Sancha_Go_Left = 0;
void Sancha_buxian()
{
    float k = 0;
    Sancha_Go_Right = 1;
    if (Sancha_Go_Right)//锟斤拷锟斤拷锟斤拷锟斤拷�??  锟斤拷锟较拐碉拷锟斤拷锟斤拷盏锟�??
    {
        k = (Sancha_Button_Col - Left_Point_Col) / (Sancha_Button_Row - Left_Point_Row);
        for (int i = Sancha_Start_Row; i >= Sancha_Button_Row; i++)
        {
            Bin_Image[i][line_elements[i].left] = 0;
            line_elements[i].left = i * k + Sancha_Start_Row;
            Bin_Image[i][line_elements[i].left] = 2;
        }

    }

    else
    {

    }

}*/

/* xxxxxxxxzzzzzzzz
int Sancha_Find_Flag = 0;
void Road_Type_Judge()
{
    //锟斤拷锟斤拷


}
*/
