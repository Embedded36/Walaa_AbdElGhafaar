/*
 * INT0_prog.c
 *
 *  Created on: Mar 30, 2016
 *      Author: Lenovo
 */
#include "types.h"
#include "utils.h"
#include "INT0_config.h"
#include "INT0_private.h"
#include "INT0_interface.h"



extern void INT0_voidInit(void)
{

		MCUCR&=~(3<<ISC00);
		MCUCR|=(3<<ISC00);
		//GICR&=~(1<<INT0);
		GICR|=(INT0_EN<<INT0);
		/***************************************/


}
