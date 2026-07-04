/**
* @par Copyright (C): 2018-2028, Shenzhen Yahboom Tech
* @file         // main.c
* @author       // lly
* @version      // V1.0
* @date         // 240628
* @brief        // 程序入口 Program entry
* @details      
* @par History  // 修改历史记录列表，每条修改记录应包括修改日期、修改者及
*               // 修改内容简述   Modification history list, each modification record should include the modification date, modifier and a brief description of the modification content
*/

#include "AllHeader.h"

int main(void)
{	
	
	bsp_init();//初始化 initialization
	
	

	while(1)
	{
		GPIO_SetBits(LED_PORT,LED_PIN);//点亮LED  open led
		delay_ms(500);//500ms反转一次led灯  delay 500ms
		GPIO_ResetBits(LED_PORT,LED_PIN);//关闭LED  close led
		delay_ms(500);//500ms反转一次led灯 delay 500ms
		
	}
}


