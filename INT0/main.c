/*
 * main.c
 *
 *  Created on: Mar 28, 2016
 *      Author: Lenovo
 */
#include "types.h"
#include "config.h"
#include "delay.h"
#include "DIO_interface.h"
#include "INT0_interface.h"
ISR(__vector_1)
{
	//INT0_ISR_Func1();
	DIO_u8WritePinVal(DIO_u8PIN0,DIO_u8HIGH);
}

//void (*Ptr_ISR)(void);

void main(void)
{
	DIO_voidInit();
	INT0_voidInit();
	//enable global interrupt
	__asm__("SEI");
	while(1)
	{
		DELAYMILLISECONDS(1000);
		DIO_u8WritePinVal(DIO_u8PIN0,DIO_u8LOW);

	}

}
