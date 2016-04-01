/*
 * INT0_private.h
 *
 *  Created on: Mar 30, 2016
 *      Author: Lenovo
 */

#ifndef INT0_PRIVATE_H_
#define INT0_PRIVATE_H_

#define MCUCR		*((volatile u8*)(0x55))
#define MCUCSR		*((volatile u8*)(0x54))
#define GICR		*((volatile u8*)(0x5B))
#define GIFR		*((volatile u8*)(0x5A))

#endif /* INT0_PRIVATE_H_ */
