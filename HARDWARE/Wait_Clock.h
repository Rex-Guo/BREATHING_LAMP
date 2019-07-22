#ifndef _WAIT_CLOCK_H_
#define _WAIT_CLOCK_H_

#include "stm32f4xx.h"

/************************** �궨�� **********************/

/************************* �������� **********************/

 /*
  * ��  �ܣ���ʼ����ʱ��
  * ��  ����void
  * ����ֵ��void
  *
 */
void Systick_Init(void);

/*
  * ��  �ܣ�΢���ʱ
  * ��  ����u32 nus
  * ����ֵ��void
  *
 */
void delay_us(u32 nus);

/*
  * ��  �ܣ������ʱ
  * ��  ����u32 nms
  * ����ֵ��void
  *
 */
void delay_ms(u32 nms);

/*
  * ��  �ܣ����ʱ
  * ��  ����u32 ns
  * ����ֵ��void
  *
 */
void delay_s(u32 ns);

#endif
