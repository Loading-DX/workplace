/**
* @par Copyright (C): 2018-2028, Shenzhen Yahboom Tech
* @file         // main.c
* @author       // lly
* @version      // V1.0
* @date         // 240628
* @brief        // 程序入口 Program entry
* @details      
* @par History  // 修改历史记录列表，每条修改记录应包括修改日期、修改者及
*               // 修改内容简述  Modification history list, each modification record should include the modification date, modifier and a brief description of the modification content
*/

#include "AllHeader.h"

//蓝牙接收信息在蓝牙串口中断处理了
//The Bluetooth received information was interrupted in the Bluetooth serial port
int main(void)
{	
	bsp_init();
	
	while(1)
	{
		LED =!LED;
		delay_ms(200);
	}
}



