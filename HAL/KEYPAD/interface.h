/*
 * interface.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Maryam
 */

#ifndef HAL_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_INTERFACE_H_

#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"


#define KEYPAD_ROW_0 0
#define KEYPAD_ROW_1 1
#define KEYPAD_ROW_2 2
#define KEYPAD_ROW_3 3

#define KEYPAD_COL_0 4
#define KEYPAD_COL_1 5
#define KEYPAD_COL_2 6
#define KEYPAD_COL_3 7

#define KEYPAD_PORTA  0
#define KEYPAD_PORTB  1
#define KEYPAD_PORTC  2
#define KEYPAD_PORTD  3


#define KEYPAD_PRESSED  0
#define KEYPAD_RELEASED 1

#define OUTPUT_PIN      1
#define INPUT_PIN       0
#define  HIGH           1
#define  LOW            0


#define KEYPAD_ROW_NUM   4
#define KEYPAD_COL_NUM   4

//
typedef void (*oper_function)(u8 , u8 ,u8*);


void KEYPAD_INITI();
void KEYPAD_GET_BUTT(u8 *U8CHAR);


#endif /* HAL_KEYPAD_INTERFACE_H_ */
