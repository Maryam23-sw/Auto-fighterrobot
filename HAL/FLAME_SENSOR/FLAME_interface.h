/*
 * FLAME_interface.h
 *
 *  Created on: Aug 13, 2024
 *      Author: Maryam
 */

#ifndef HAL_FLAME_SENSOR_FLAME_INTERFACE_H_
#define HAL_FLAME_SENSOR_FLAME_INTERFACE_H_

#include "../../LIBRARY\STD_TYPE.h"


#define flame_pin_0  0
#define flame_pin_1  1
#define flame_pin_2  2
#define flame_pin_3  3
#define flame_pin_4  4
#define flame_pin_5  5
#define flame_pin_6  6
#define flame_pin_7  7


#define flame_PPORTA  0
#define flame_PPORTB  1
#define flame_PPORTC  2
#define flame_PPORTD  3


#define flame_CHANNEL0      0
#define flame_CHANNEL1      1
#define flame_CHANNEL2      2
#define flame_CHANNEL3      3
#define flame_CHANNEL4      4
#define flame_CHANNEL5      5
#define flame_CHANNEL6      6
#define flame_CHANNEL7      7


void Flame_Sensor_Init(u8 U8PORT, u8 U8PIN);
void Flame_Sensor_Init_Analog(u8 U8CHANNEL);
void Flame_Sensor_Read(u8 U8PORT, u8 U8PIN);
void Flame_Sensor_Read_Analog(u8 U8CHANNEL);

#endif /* HAL_FLAME_SENSOR_FLAME_INTERFACE_H_ */
