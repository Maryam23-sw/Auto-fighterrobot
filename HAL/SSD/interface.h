/*
 * interface.h
 *
 *  Created on: Aug 1, 2024
 *      Author: Maryam
 */
#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"

#ifndef HAL_SSD_INTERFACE_H_
#define HAL_SSD_INTERFACE_H_

#define SSD_pin_0  0
#define SSD_pin_1  1
#define SSD_pin_2  2
#define SSD_pin_3  3
#define SSD_pin_4  4
#define SSD_pin_5  5
#define SSD_pin_6  6
#define SSD_pin_7  7


#define SSD_PPORTA  0
#define SSD_PPORTB  1
#define SSD_PPORTC  2
#define SSD_PPORTD  3


#define SSD_UPPERPINS   0xf0
#define SSD_lowerPINS   0x0f





#define OUTPUT      1
#define INPUT       0

#define HIGH       1
#define LOW        0

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00


#define SSD_UPPER_0      0
#define SSD_UPPER_1      0x10
#define SSD_UPPER_2      0x20
#define SSD_UPPER_3      0x30
#define SSD_UPPER_4      0x40
#define SSD_UPPER_5      0x50
#define SSD_UPPER_6      0x60
#define SSD_UPPER_7      0x70
#define SSD_UPPER_8      0x80
#define SSD_UPPER_9      0x90





void SSD_INTI(u8 U8PORT ,u8 U8PINSELECTION);
void SSD_WRITE_NUM(u8 U8PORT ,u8 U8PINSELECTION , u8 u8NUMBER);
void SSD_COUNT_UP(u8 U8PORT ,u8 U8PINSELECTION , u8 u8NUMBER);// COUNT UP
void SSD_REVERSE_NUMBERS(u8 U8PORT ,u8 U8PINSELECTION ,  u8 u8NUMBER); // COUNT DOWN


#endif /* HAL_SSD_INTERFACE_H_ */
