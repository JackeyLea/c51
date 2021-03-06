/******************************************************************
* 	         继电器实验										                        *
*  连接方法：P2.7接JP5的K1(按钮接口)                              *
*              P1.4接J2                 			                    *
*	按下P2.7 继电器P1.4动作		       						                    *
*******************************************************************/
#include "mcs51/8051.h"//51的端口和各特殊寄存器定义在此文件中

#define RELAY P1_4 //定义继电器对应单片机管脚
#define K1    P2_7 //定义按钮对应单片机管脚

/*********************************************************
主函数													 *
**********************************************************/
int main()
{
  if (!K1) RELAY = 0;    //按钮按下 开启继电器
  else 	RELAY = 1;		 //按钮松开 关闭继电器

  return 0;
}
