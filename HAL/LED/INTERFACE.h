/*
 * INTERFACE.h
 *
 *  Created on: Jul 27, 2024
 *      Author: Maryam
 */

#ifndef HAL_LED_INTERFACE_H_
#define HAL_LED_INTERFACE_H_

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

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00




void LED_H_INTIAIL_1LED (u8 U8PORT , u8 U8PIN);
void LED_H_INTIAIL_8LED (u8 U8PORT);
void LED_H_TURN_ON_OR_OFF(u8 U8PORT , u8 U8PIN , u8 U8STAT);
void LED_H_BLIINK_LED(u8 U8PORT ,u8 U8PIN);
void LED_H_TURN_ON_OR_OFF_8LEDS(u8 U8PORT , u8 U8PIN , u8 U8STAT);
void LED_H_BLIINK_8LEDS(u8 U8PORT);












#endif /* HAL_LED_INTERFACE_H_ */

