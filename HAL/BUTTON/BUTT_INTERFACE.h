/*
 * BUTT_INTERFACE.h
 *
 *  Created on: Jul 28, 2024
 *      Author: Maryam
 */

#ifndef HAL_BUTTON_BUTT_INTERFACE_H_
#define HAL_BUTTON_BUTT_INTERFACE_H_

#include "../../LIBRARY\STD_TYPE.h"


#define DIO_pin_0  0
#define DIO_pin_1  1
#define DIO_pin_2  2
#define DIO_pin_3  3
#define DIO_pin_4  4
#define DIO_pin_5  5
#define DIO_pin_6  6
#define DIO_pin_7  7


#define DIO_PPORTA  0
#define DIO_PPORTB  1
#define DIO_PPORTC  2
#define DIO_PPORTD  3

#define INPUT       0
#define PUSHED      1
#define RELAX       0


/*  ************************PROTOTYPE******************************/

void BUTT_INTI(u8 U8PORT , u8 U8PIN);

void BUTT_READ(u8 U8PORT , u8 U8PIN , u8 *READING);





#


#endif /* HAL_BUTTON_BUTT_INTERFACE_H_ */
