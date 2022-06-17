/*LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
锟斤拷平    台锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟杰科硷拷TC3xxxA锟斤拷锟侥帮拷
锟斤拷锟斤拷    写锟斤拷chiusir
锟斤拷E-mail锟斤拷chiusir@163.com
锟斤拷锟斤拷锟斤拷锟芥本锟斤拷V1.1 锟斤拷权锟斤拷锟叫ｏ拷锟斤拷位使锟斤拷锟斤拷锟斤拷锟斤拷系锟斤拷权
锟斤拷锟斤拷锟斤拷锟铰★拷2020锟斤拷10锟斤拷28锟斤拷
锟斤拷锟斤拷锟斤拷锟较拷慰锟斤拷锟斤拷械锟街凤拷锟�
锟斤拷锟斤拷    站锟斤拷http://www.lqist.cn
锟斤拷锟皆憋拷锟斤拷锟教★拷http://longqiu.taobao.com
------------------------------------------------
锟斤拷dev.env.锟斤拷AURIX Development Studio1.2.2锟斤拷锟斤拷锟较版本
锟斤拷Target 锟斤拷 TC3xxxA
锟斤拷Crystal锟斤拷 20.000Mhz
锟斤拷SYS PLL锟斤拷 300MHz
________________________________________________________________
锟斤拷锟斤拷iLLD_1_0_1_11_0锟阶诧拷锟斤拷锟�,
使锟斤拷锟斤拷锟教碉拷时锟津，斤拷锟斤拷锟斤拷锟矫伙拷锌崭锟斤拷英锟斤拷路锟斤拷锟斤拷
=================================================================
锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷频锟斤拷址锟斤拷https://space.bilibili.com/95313236
QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ*/

#ifndef __LQ_CAMERA_H
#define __LQ_CAMERA_H

#include "LQ_MT9V034.h"


#define LQMT9V034   //默锟斤拷为锟斤拷锟斤拷锟斤拷锟斤拷头
#define USETFT1_8
//#define USEOLED    //使锟斤拷OLED锟斤拷锟斤拷TFT1.8模锟介，默锟斤拷为TFT1.8

#define IMAGEH  MT9V034_IMAGEH   /*!< 锟斤拷锟斤拷头锟缴硷拷锟竭讹拷 */
#define IMAGEW  MT9V034_IMAGEW   /*!< 锟斤拷锟斤拷头锟缴硷拷锟斤拷锟斤拷 */

/* 使锟斤拷锟斤拷锟斤拷锟斤拷锟� 锟睫革拷锟斤拷锟斤即锟斤拷 */
#ifdef USEOLED
    #define LCDH    60  /*!< OLED锟斤拷示锟竭度ｏ拷锟矫伙拷使锟矫ｏ拷锟竭讹拷 */
    #define LCDW    80  /*!< OLED锟斤拷示锟斤拷锟饺ｏ拷锟矫伙拷使锟矫ｏ拷锟斤拷锟斤拷 */
#else
    #define LCDH    60  /*!< TFT锟斤拷示锟竭度ｏ拷锟矫伙拷使锟矫ｏ拷锟竭讹拷 */
    #define LCDW    94  /*!< TFT锟斤拷示锟斤拷锟饺ｏ拷锟矫伙拷使锟矫ｏ拷锟斤拷锟斤拷 */
#endif

#define MAX_ROW   LCDH
#define MAX_COL   LCDW

/** 图锟斤拷原始锟斤拷锟捷达拷锟� */
extern unsigned char Image_Data[IMAGEH][IMAGEW];

/** 压锟斤拷锟斤拷之锟斤拷锟斤拷锟节达拷锟斤拷锟侥伙拷锟绞撅拷锟斤拷锟�  */
extern unsigned char Image_Use[LCDH][LCDW];

/** 锟斤拷值锟斤拷锟斤拷锟斤拷锟斤拷OLED锟斤拷示锟斤拷锟斤拷锟斤拷 */
struct element
{
    sint16 left;
    sint16 right;
    sint16 mid;
    sint16 width;
};
extern unsigned char Bin_Image[LCDH][LCDW];
extern unsigned char Road_Mid[LCDH];
extern unsigned char Road_Left[LCDH];
extern unsigned char Road_Right[LCDH];
extern struct element line_elements[LCDH];
extern sint16 Road_Left_Top[2];
extern sint16 Road_Right_Top[2];
extern sint16 Road_Left_Bottom[2];
extern sint16 Road_Right_Bottom[2];

extern sint16 Road_Left_Top[2];
extern sint16 Road_Right_Top[2];
extern sint16 Road_Left_Bottom[2];
extern sint16 Road_Right_Bottom[2];

/*!
  * @brief    锟斤拷锟斤拷锟较憋拷锟斤拷位锟斤拷
  *
  * @param    锟斤拷
  *
  * @return   锟斤拷
  *
  * @note     锟斤拷位锟斤拷锟斤拷帧头锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷 
  *
  * @see      CAMERA_Reprot();
  *
  * @date     2019/9/24 锟斤拷锟节讹拷
  */
void CAMERA_Reprot(void);



/*!
  * @brief    锟斤拷锟斤拷头锟斤拷锟斤拷锟斤拷锟斤拷
  *
  * @param    fps:  帧锟斤拷 
  *
  * @return   锟斤拷
  *
  * @note     锟斤拷锟斤拷头锟斤拷一些锟斤拷锟斤拷锟斤拷锟斤拷LQ_MT9V034.c锟叫的宏定锟斤拷锟斤拷锟睫革拷
  *
  * @see      CAMERA_Init(50);   //锟斤拷始锟斤拷MT9V034  50帧 注锟斤拷使锟矫帮拷色锟斤拷锟斤拷锟斤拷虐锟阶拷锟斤拷锟�
  *
  * @date     2019/10/22 锟斤拷锟节讹拷
  */
void CAMERA_Init(unsigned char fps);


/**
  * @brief    锟斤拷取锟斤拷要使锟矫碉拷图锟斤拷锟斤拷锟斤拷
  *
  * @param    锟斤拷
  *
  * @return   锟斤拷
  *
  * @note     锟斤拷
  *
  * @see      Get_Use_Image();
  *
  * @date     2019/6/25 锟斤拷锟节讹拷
  */
void Get_Use_Image(void);


/**
  * @brief    锟斤拷值锟斤拷
  *
  * @param    mode  锟斤拷  0锟斤拷使锟矫达拷锟斤拷锟街�    1锟斤拷使锟斤拷平锟斤拷锟斤拷值
  *
  * @return   锟斤拷
  *
  * @note     锟斤拷
  *
  * @example  Get_Bin_Image(0); //使锟矫达拷蚍ǘ锟街碉拷锟�
  *
  * @date     2019/6/25 锟斤拷锟节讹拷
  */
void Get_Bin_Image(unsigned char mode);



/*!
  * @brief    锟斤拷锟斤拷锟斤拷锟街碉拷锟叫� 
  *
  * @param    tmImage 锟斤拷 图锟斤拷锟斤拷锟斤拷
  *
  * @return   锟斤拷值
  *
  * @note     锟轿匡拷锟斤拷https://blog.csdn.net/zyzhangyue/article/details/45841255
  * @note     https://www.cnblogs.com/moon1992/p/5092726.html
  * @note     https://www.cnblogs.com/zhonghuasong/p/7250540.html     
  * @note     Ostu锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷罘斤拷锟斤拷锟酵拷锟酵筹拷锟斤拷锟斤拷锟酵硷拷锟斤拷直锟斤拷图锟斤拷锟斤拷锟斤拷实锟斤拷全锟斤拷锟斤拷值T锟斤拷锟皆讹拷选取锟斤拷锟斤拷锟姐法锟斤拷锟斤拷为锟斤拷
  * @note     1) 锟饺硷拷锟斤拷图锟斤拷锟街憋拷锟酵硷拷锟斤拷锟斤拷锟酵硷拷锟斤拷锟斤拷械锟斤拷锟斤拷氐惆达拷锟�0~255锟斤拷256锟斤拷bin锟斤拷统锟斤拷锟斤拷锟斤拷每锟斤拷bin锟斤拷锟斤拷锟截碉拷锟斤拷锟斤拷
  * @note     2) 锟斤拷一锟斤拷直锟斤拷图锟斤拷也锟斤拷锟斤拷每锟斤拷bin锟斤拷锟斤拷锟截碉拷锟斤拷锟斤拷锟斤拷锟斤拷锟杰碉拷锟斤拷锟截碉拷
  * @note     3) i锟斤拷示锟斤拷锟斤拷锟斤拷锟街碉拷锟揭诧拷锟揭伙拷锟斤拷叶燃锟斤拷锟斤拷锟�0锟斤拷始锟斤拷锟斤拷    1
  * @note     4) 通锟斤拷锟斤拷一锟斤拷锟斤拷直锟斤拷图锟斤拷统锟斤拷0~i 锟揭度硷拷锟斤拷锟斤拷锟斤拷(锟斤拷锟斤拷锟斤拷锟斤拷值锟节此凤拷围锟斤拷锟斤拷锟截斤拷锟斤拷前锟斤拷锟斤拷锟斤拷) 锟斤拷占锟斤拷锟斤拷图锟斤拷谋锟斤拷锟絯0锟斤拷锟斤拷统锟斤拷前锟斤拷锟斤拷锟截碉拷平锟斤拷锟揭讹拷u0锟斤拷统锟斤拷i~255锟揭度硷拷锟斤拷锟斤拷锟斤拷(锟斤拷锟斤拷锟斤拷锟斤拷值锟节此凤拷围锟斤拷锟斤拷锟截斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷) 锟斤拷占锟斤拷锟斤拷图锟斤拷谋锟斤拷锟絯1锟斤拷锟斤拷统锟狡憋拷锟斤拷锟斤拷锟截碉拷平锟斤拷锟揭讹拷u1锟斤拷
  * @note     5) 锟斤拷锟斤拷前锟斤拷锟斤拷锟截和憋拷锟斤拷锟斤拷锟截的凤拷锟斤拷 g = w0*w1*(u0-u1) (u0-u1)
  * @note     6) i++锟斤拷转锟斤拷4)锟斤拷直锟斤拷i为256时锟斤拷锟斤拷锟斤拷锟斤拷
  * @note     7) 锟斤拷锟斤拷锟絞锟斤拷应锟斤拷i值锟斤拷为图锟斤拷锟饺拷锟斤拷锟街�
  * @note     缺锟斤拷:OSTU锟姐法锟节达拷锟斤拷锟斤拷锟秸诧拷锟斤拷锟饺碉拷图锟斤拷锟绞憋拷锟叫э拷锟斤拷锟斤拷锟斤拷圆锟斤拷茫锟斤拷锟轿拷锟斤拷玫锟斤拷锟饺拷锟斤拷锟斤拷锟斤拷锟较拷锟�
  * @note     锟斤拷锟斤拷锟斤拷詹锟斤拷锟斤拷锟�  https://blog.csdn.net/kk55guang2/article/details/78475414
  * @note     https://blog.csdn.net/kk55guang2/article/details/78490069
  * @note     https://wenku.baidu.com/view/84e5eb271a37f111f0855b2d.html
  *
  * @see      GetOSTU(Image_Use);//锟斤拷锟斤拷锟街�
  *
  * @date     2019/6/25 锟斤拷锟节讹拷
  */ 
short GetOSTU(unsigned char tmImage[LCDH][LCDW]);


/*!
  * @brief    锟斤拷锟斤拷头锟斤拷锟斤拷锟斤拷锟斤拷
  *
  * @param
  *
  * @return
  *
  * @note     锟斤拷锟斤拷MT9V034  注锟斤拷锟斤拷要使锟斤拷  锟斤拷锟斤拷锟斤拷虐妫拷锟缴拷锟阶拷锟斤拷锟�
  *
  * @example
  *
  * @date     2019/10/22 锟斤拷锟节讹拷
  */
void Test_CAMERA(void);


/*!
  * @brief    锟斤拷锟斤拷soble锟斤拷锟截硷拷锟斤拷锟斤拷拥锟揭伙拷直锟斤拷丶锟斤拷
  *
  * @param    imageIn    锟斤拷锟斤拷锟斤拷锟斤拷
  *           imageOut   锟斤拷锟斤拷锟斤拷锟�      锟斤拷锟斤拷亩锟街碉拷锟斤拷锟侥憋拷锟斤拷锟斤拷息
  *           Threshold  锟斤拷值
  *
  * @return
  *
  * @note
  *
  * @example
  *
  * @date     2020/5/15
  */
void lq_sobel(unsigned char imageIn[LCDH][LCDW], unsigned char imageOut[LCDH][LCDW], unsigned char Threshold);


/*!
  * @brief    锟斤拷锟斤拷soble锟斤拷锟截硷拷锟斤拷锟斤拷拥锟揭伙拷锟斤拷远锟斤拷锟街碉拷锟斤拷丶锟斤拷
  *
  * @param    imageIn    锟斤拷锟斤拷锟斤拷锟斤拷
  *           imageOut   锟斤拷锟斤拷锟斤拷锟�      锟斤拷锟斤拷亩锟街碉拷锟斤拷锟侥憋拷锟斤拷锟斤拷息
  *
  * @return
  *
  * @note
  *
  * @example
  *
  * @date     2020/5/15
  */
void lq_sobelAutoThreshold(unsigned char imageIn[LCDH][LCDW], unsigned char imageOut[LCDH][LCDW]);
void Seek_Road(void);
void Bin_Image_Filter(void);
void Seek_Road_Edge();
sint16 servo_control();
void dots2line(sint16 x1,sint16 y1,sint16 x2,sint16 y2,sint16 line_type);
void roundabout();
void init_line_elements();
void setLTop(sint16 x, sint16 y);
void setRTop(sint16 x, sint16 y);
void setMid(int terminiate_line);
#endif



