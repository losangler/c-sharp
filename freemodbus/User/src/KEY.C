#include "KEY.H"

void KeyInit(void)//�������IO��ʼ��
{
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOC, ENABLE);//ʹ��GPIOA,GPIOD,GPIOEʱ��

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//��������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_5;		
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOE0


}

