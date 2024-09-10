/*
 * interface.h
 *
 *  Created on: Aug 5, 2024
 *      Author: Maryam
 */

#ifndef HAL_LM35_INTERFACE_H_
#define HAL_LM35_INTERFACE_H_

#include "../../LIBRARY\STD_TYPE.h"


#define LM35_pin_0  0
#define LM35_pin_1  1
#define LM35_pin_2  2
#define LM35_pin_3  3
#define LM35_pin_4  4
#define LM35_pin_5  5
#define LM35_pin_6  6
#define LM35_pin_7  7


#define LM35_PPORTA  0
#define LM35_PPORTB  1
#define LM35_PPORTC  2
#define LM35_PPORTD  3


#define LM35_CHANNEL0      0
#define LM35_CHANNEL1      1
#define LM35_CHANNEL2      2
#define LM35_CHANNEL3      3
#define LM35_CHANNEL4      4
#define LM35_CHANNEL5      5
#define LM35_CHANNEL6      6
#define LM35_CHANNEL7      7






void LM35_init(void);
void LM35_getTemperature(u8 channel, f32 *temperature);

#endif /* HAL_LM35_INTERFACE_H_ */
