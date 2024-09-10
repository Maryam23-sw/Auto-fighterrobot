/*
 * IR_interface.h
 *
 *  Created on: Aug 13, 2024
 *      Author: Maryam
 */

#ifndef HAL_IR_SENSOR_IR_INTERFACE_H_
#define HAL_IR_SENSOR_IR_INTERFACE_H_


#include "../../LIBRARY\STD_TYPE.h"


#define IR_pin_0  0
#define IR_pin_1  1
#define IR_pin_2  2
#define IR_pin_3  3
#define IR_pin_4  4
#define IR_pin_5  5
#define IR_pin_6  6
#define IR_pin_7  7


#define IR_PPORTA  0
#define IR_PPORTB  1
#define IR_PPORTC  2
#define IR_PPORTD  3


#define IR_CHANNEL0      0
#define IR_CHANNEL1      1
#define IR_CHANNEL2      2
#define IR_CHANNEL3      3
#define IR_CHANNEL4      4
#define IR_CHANNEL5      5
#define IR_CHANNEL6      6
#define IR_CHANNEL7      7

void IR_Sensor_Init(u8 U8PORT, u8 U8PIN);
void IR_Sensor_Init_Analog(u8 U8CHANNEL);
void IR_Sensor_Read(u8 U8PORT, u8 U8PIN);
void IR_Sensor_Read_Analog(u8 U8CHANNEL);




#endif /* HAL_IR_SENSOR_IR_INTERFACE_H_ */
