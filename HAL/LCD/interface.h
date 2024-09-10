/*
 * interface.h
 *
 *  Created on: Jul 28, 2024
 *      Author: Maryam
 */

#ifndef HAL_LCD_INTERFACE_H_
#define HAL_LCD_INTERFACE_H_


/* ********************** include *******************************/
#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"
#include "private.h"



#define LCD_pin_0  0
#define LCD_pin_1  1
#define LCD_pin_2  2
#define LCD_pin_3  3
#define LCD_pin_4  4
#define LCD_pin_5  5
#define LCD_pin_6  6
#define LCD_pin_7  7


#define LCD_PPORTA  0
#define LCD_PPORTB  1
#define LCD_PPORTC  2
#define LCD_PPORTD  3




#define OUTPUT      1
#define INPUT       0

#define HIGH       1
#define LOW        0

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00

/* ****************************processor directive*************/

struct lcd_config
{
	u8 LCD_RS_PIN;
	u8 LCD_RW_PIN;
	u8 LCD_EN_PIN;

	u8 LCD_RS_PORT;
	u8 LCD_RW_PORT;
	u8 LCD_EN_PORT;

	u8 LCD_DATA_PORT;

};

/* ***********************prototype******************************/


void LCD_INTI(struct lcd_config * lcd_con);

void SEND_COMM(struct lcd_config *lcd_con , u8 COMM);//add LCD

void SEND_CHAR(struct lcd_config *lcd_con , u8 DATA);

void WRITE_STRING(struct lcd_config *lcd_con , u8 *DATA);

void CLEAR_DIS(struct lcd_config *lcd_con);
void LCD_RETURN_HOME(struct lcd_config *lcd_con );
u8 LCD_CONVERT_NUM_TO_CHAR(u16 NUMBER);
void convert_s32_t0_string(u16 VALUE , u8 *str);
void scrolling(u8* string);


#endif /* HAL_LCD_INTERFACE_H_ */
