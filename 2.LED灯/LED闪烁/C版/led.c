/**************************************************************************************
 *		              LED闪烁的简单试验												  *
 *
 *     连接方法： JP11（P2）和J12用8PIN排线连接起来								      *
 *																					  *
 ***************************************************************************************/

#include "/usr/share/sdcc/include/mcs51/8051.h" //此文件中定义了51的一些特殊功能寄存器

void delay(unsigned int i); //声明延时函数

main() {
    while (1) {
        P2 = 0x00; //置P0口为低电平
        delay(600); //调用延时程序
        P2 = 0xff; //置P0口为高电平
        delay(600); // 调用延时程序
    }
}

/*******延时函数*************/
void delay(unsigned int i) {
    unsigned char j;
    for (i; i > 0; i--) //循环 600*255 次
        for (j = 255; j > 0; j--)
            ;
}
