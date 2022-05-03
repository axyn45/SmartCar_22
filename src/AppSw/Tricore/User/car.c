/*
 * car.c
 *
 *  Created on: 2022年4月14日
 *      Author: d'y't'q'wa's
 */

#include <stdio.h>
#include <stdlib.h>
#include <LQ_TFT18.h>
#include <LQ_CAMERA.h>
extern unsigned char Bin_Image[LCDH][LCDW];

int whitePoint[60] = { 0 };//每一行的白点个数
int width[60] = { 0 };//白点宽度

int L_black[60] = { 0 };//举个例子 L_black[i]=j  就是第i行的左边界点（黑白跳变点）再第j列 就是一个坐标(i,j)  0<=i<=60  0<=j<=188
int R_black[60] = { 0 };
int mid[60] = { 0 };

void FindEdge()//找边缘
{
    int i;
    int j;
    int start = 0;
    int sum = 0;//用来计算白点个数
    for (i = 59; i >= 0; i--)
    {
        if (i == 59)
        {
            mid[i] = 72;// 144/2
            continue;
        }
        start = mid[i + 1];//start是上一行的重点所在的纵坐标
        if (start < L_black[i + 1] + 5 || start > R_black[i + 1] - 5)
        {
            start = mid[i + 1];
        }
        for (j = start; !Bin_Image[i][j] || Bin_Image[i][j - 1] || Bin_Image[i][j - 2]; j--)//左扫线
            L_black[i] = j;
        for (j = start; !Bin_Image[i][j] || Bin_Image[i][j + 1] || Bin_Image[i][j + 2]; j++)//右扫线
            R_black[i] = j;
        mid[i] = (R_black[i] + L_black[i]) >> 1;

        for (sum = 0, j = L_black[i]; j < R_black[i]; j++)
        {
            sum += Bin_Image[i][j];
        }
        whitePoint[i] = sum;//每行中间白点个数
        width[i] = R_black[i] - L_black[i];
    }
}
void Paint()
{
int i=0;
int j=0;
for(i=0;i<60;i++)
{
    for(j=0;j<94;j++)
        {
            TFTSPI_Draw_Dot(i,L_black[j],u16YELLOW);//弄成黄色
            TFTSPI_Draw_Dot(i,R_black[j],u16YELLOW);//弄成黄色
        }
}

}




