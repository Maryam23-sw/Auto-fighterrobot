/*
 * INTERFACE.h
 *
 *  Created on: Jul 27, 2024
 *      Author: sultan
 */

#ifndef HAL_BUZZER_INTERFACE_H_
#define HAL_BUZZER_INTERFACE_H_

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



#define OUTPUT      1
#define INPUT       0

#define HIGH       1
#define LOW        0



#define LONG_BEEP   5000
#define SHORT_BEEP   1000
#define ONCE        100
#define TWICE       2
#define TRIPLE      3





void BUZZER_INTI(u8 U8PORT , u8 U8PIN);
void BUZZER_ON(u8 U8PORT , u8 U8PIN);
void BUZZER_OFF(u8 U8PORT , u8 U8PIN);
void BUZZER_ONCE(u8 U8PORT , u8 U8PIN );
void BUZZER_TWICE(u8 U8PORT , u8 U8PIN  , u8 U16DURATION);
void BUZZER_TRIPLE(u8 U8PORT , u8 U8PIN  , u8 U16DURATION);
void BUZZER_LONG(u8 U8PORT , u8 U8PIN );



#endif /* HAL_BUZZER_INTERFACE_H_ */
