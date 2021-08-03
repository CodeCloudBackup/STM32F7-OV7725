#include "sys.h"
#include "delay.h" 
#include "led.h" 
#include "lcd.h"
#include "usart.h" 
#include "log.h"
//ALIENTEK ������STM32F7������ ʵ��3
//����ͨ��ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾
  
int main(void)
{ 
	u8 t;
	u8 len;	
	u16 times=0;  
	u8 led0sta=1;			//LED0ǰ״̬
	int ret = 0;
	Stm32_Clock_Init(432,25,2,9);//����ʱ��,216Mhz
    delay_init(216);		//��ʱ��ʼ�� 
	uart_init(108,115200);	//���ڳ�ʼ��Ϊ115200
	LED_Init();		  		//��ʼ����LED���ӵ�Ӳ���ӿ�  
	LCD_Init();				//��ʼ��LCD	
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


