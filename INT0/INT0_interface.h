/*
 * INT0_interface.h
 *
 *  Created on: Mar 30, 2016
 *      Author: Lenovo
 */

#ifndef INT0_INTERFACE_H_
#define INT0_INTERFACE_H_

#define ISR(vector, ...) 	\
		void vector(void) __attribute__ ((signal,used,externally_visible)) __VA_ARGS__;\
		void vector(void)

#define ISC00		0
#define ISC01		1
#define	ANY_EDGE	1

#define INT0		6
#define INT0_EN		1
#define INT0_DIS	0

#define INTF0		6

//#define INT0_VECTOR		0X002

extern void INT0_voidInit(void);

#endif /* INT0_INTERFACE_H_ */
