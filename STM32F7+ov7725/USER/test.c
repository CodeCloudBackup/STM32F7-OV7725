#include "sys.h"
#include "delay.h" 
#include "led.h" 
#include "lcd.h"
#include "usart.h" 
#include "log.h"
//ALIENTEK 阿波罗STM32F7开发板 实验3
//串口通信实验  
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司
  
int main(void)
{ 
	u8 t;
	u8 len;	
	u16 times=0;  
	u8 led0sta=1;			//LED0前状态
	int ret = 0;
	Stm32_Clock_Init(432,25,2,9);//设置时钟,216Mhz
    delay_init(216);		//延时初始化 
	uart_init(108,115200);	//串口初始化为115200
	LED_Init();		  		//初始化与LED连接的硬件接口  
	LCD_Init();				//初始化LCD	
	app_log(INFO,"%d app init successful",ret);
	POINT_COLOR=BLACK;
	LCD_ShowString(10,40,240,32,32,"Apollo STM32"); 
	LCD_ShowString(10,80,240,24,24,"OV7725 TEST");
	LCD_ShowString(10,130,240,16,16,lcd_id);
	LCD_ShowString(10,150,240,12,12,"2016/7/12");
	delay_ms(1000);	
	while(1)
	{
		
	}
}


