/*
 * test.c
 *
 *  Created on: 2022年4月16日
 *      Author: d'y't'q'wa's
 */
#include <ANO_DT.h>
#include <IfxGtm_PinMap.h>
#include <LQ_GPT12_ENC.h>
#include <LQ_GTM.h>
#include <LQ_PID.h>
#include <stdint.h>
#include <IfxGtm_PinMap.h>
#include <LQ_GPIO_KEY.h>
#include <LQ_GPIO_LED.h>
#include <LQ_GTM.h>
#include <LQ_STM.h>
#include <LQ_TFT18.h>
#include <LQ_UART.h>
#include <stdio.h>
#include <stdlib.h>
#include <LQ_Inductor.h>
#include <LQ_MotorServo.h>
#include <LQ_CCU6.h>
#include <_Impl/IfxPort_cfg.h>
#include <LQ_GPIO.h>
//写一个函数使车子走一段如何自己停下来

void test()
{
    short duty = 1500;//900时的速度很慢
    char txt[16];
    sint16 speed;
    sint32 showtime=0;
    TFTSPI_CLS(u16BLUE);          //清屏
    TFTSPI_P8X16Str(2, 0, "LQ Motor Test", u16RED, u16BLUE);
    MotorInit();
    MotorCtrl(1500,1500);
    int RollPause=0;
    int flag=1;
    int flag1=1;
    int flag2=1;
    int flag3=1;
    int flag4=1;
    int flag5=1;
    ServoInit();
    ServoCtrl(1540);
    ENC_InitConfig(ENC4_InPut_P02_8, ENC4_Dir_P33_5);
    ENC_InitConfig(ENC6_InPut_P20_3, ENC6_Dir_P20_0);
    while (1)
    {
        showtime=(STM_GetNowUs(STM0) - showtime) / 1000;
        /* 获取编码器值 */
        sprintf(txt, "showtime: %05d;", showtime);
        TFTSPI_P8X16Str(0, 2, txt, u16WHITE, u16BLACK);
        ECPULSE2 = ENC_GetCounter(ENC4_InPut_P02_8); //右电机 母板上编码器2，小车前进为正值
        ECPULSE2=ECPULSE2/100;
        sprintf(txt, "Enc2: %05d;", ECPULSE2);
        TFTSPI_P8X16Str(0, 4, txt, u16WHITE, u16BLACK);       //字符串显示
        //speed=(ECPULSE2*showtime*6.28*3)/100000;

        sprintf(txt,"RollPause:%5d",RollPause);
        TFTSPI_P8X16Str(0, 3, txt, u16WHITE, u16BLACK);
        sprintf(txt, "duty: %05d;", duty);
        TFTSPI_P8X16Str(0, 5, txt, u16WHITE, u16BLACK);  //字符串显示


        if(RollPause>210&&flag5)//直角转弯
        {
            flag5=0;
//            duty=400;
            ServoCtrl(1900);
            LED_Ctrl(LED0, RVS);       //电平翻转,LED闪烁
        }
        if(RollPause>275&&flag)//回正走一点
        {
            //duty=400;
            flag=0;
            ServoCtrl(1540);
            LED_Ctrl(LED1, RVS);       //电平翻转,LED闪烁
        }
        if(RollPause>335&&flag1)//开始圆环
        {
            flag1=0;
            ServoCtrl(1900);
            //duty=1600;
        }
        if(RollPause>415&&flag2)//到达了四分之一圆
        {
            flag2=0;
            ServoCtrl(2000);
        }
        if(RollPause>555&&flag3)//四分之三圆
         {
             flag3=0;
             ServoCtrl(1900);
         }
        if(RollPause>590&&flag4)//出圆
         {
             flag4=0;
             ServoCtrl(1540);

         }
        if(RollPause>880)//直线
        {
            ServoCtrl(1900);
            //duty=400;
        }
        if(RollPause>945)//转完了
        {
            ServoCtrl(1540);

        }
        if(RollPause>1135)//直线
        {
            duty=400;
        }
        MotorCtrl4w(duty, duty, duty, duty);
        UART_PutStr(UART0, txt);
        LED_Ctrl(LED0, RVS);       //电平翻转,LED闪烁
        delayms(100);              //延时等待
        RollPause+=ECPULSE2;

    }
    //MotorCtrl(400,400);//400时占空比是0车停止
}
//直角转弯
void turn_quarter()
{

}
//圆环
void circle()
{

}
//走直线
void straight_line()
{

}
//xy交叉路口
void x_y_crossing()
{

}
//十字圆环
void crossing_circle()
{

}
