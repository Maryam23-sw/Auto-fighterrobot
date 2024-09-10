/*
 * interface.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Maryam
 */

#ifndef HAL_PUSH_BUTTON_INTERFACE_H_
#define HAL_PUSH_BUTTON_INTERFACE_H_


#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"




#define PUSH_pin_0  0
#define PUSH_pin_1  1
#define PUSH_pin_2  2
#define PUSH_pin_3  3
#define PUSH_pin_4  4
#define PUSH_pin_5  5
#define PUSH_pin_6  6
#define PUSH_pin_7  7


#define PUSH_PPORTA  0
#define PUSH_PPORTB  1
#define PUSH_PPORTC  2
#define PUSH_PPORTD  3



#define PUSH_HIGH       0
#define PUSH_LOW       1

#define HIGH            1
#define LOW             0

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00



#endif /* HAL_PUSH_BUTTON_INTERFACE_H_ */


void PUSH_INTI(u8 U8PORT, u8 U8PIN );
void PUSH_GET_VALUE(u8 U8PORT, u8 U8PIN , u8 *VALUE);
void PULL_UP(u8 U8PORT, u8 U8PIN);


