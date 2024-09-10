/*
 * program.c
 *
 *  Created on: Jul 28, 2024
 *      Author: Maryam
 */


#include"interface.h"
#include "config.h"
#include <util/delay.h>
#include "../../MCAL/DIO/INTERFACE.h"
#include "private.h"





void LCD_INTI(struct lcd_config *lcd_con)
{
	DIO_MCAL_SET_PIN_DIRECTION(lcd_con->LCD_EN_PORT , lcd_con->LCD_EN_PIN ,OUTPUT);
	DIO_MCAL_SET_PIN_DIRECTION(lcd_con->LCD_RS_PORT , lcd_con->LCD_RS_PIN ,OUTPUT);
	DIO_MCAL_SET_PIN_DIRECTION(lcd_con->LCD_RW_PORT , lcd_con->LCD_RW_PIN ,OUTPUT);

	DIO_MCAL_SET_PORT_DIRECTION(lcd_con->LCD_DATA_PORT ,OUTPUT_PORT);

	_delay_ms(30);

	SEND_COMM(lcd_con ,0x38); // FUNCTION_SET = 0x38
	_delay_us(39);


	   SEND_COMM(lcd_con ,DISPLAY_ON_OFF);
		_delay_us(39);


		CLEAR_DIS(lcd_con);
		_delay_ms(2);

		SEND_COMM(lcd_con ,ENTRY_MODE_SET);

}



void SEND_COMM(struct lcd_config *lcd_con , u8 COMM)
{
	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_RS_PORT , lcd_con->LCD_RS_PIN ,LOW);
	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_RW_PORT , lcd_con->LCD_RW_PIN ,LOW);

	DIO_MCAL_SET_PORT_VALUE(lcd_con->LCD_DATA_PORT ,COMM);

	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_EN_PORT , lcd_con->LCD_EN_PIN ,HIGH);
	_delay_ms(2);

	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_EN_PORT , lcd_con->LCD_EN_PIN ,LOW);

	// MOHEM AB3T ELDATA 2ABL EL EN

}

void SEND_CHAR(struct lcd_config *lcd_con , u8 DATA)
{
	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_RS_PORT , lcd_con->LCD_RS_PIN ,HIGH);
	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_RW_PORT , lcd_con->LCD_RW_PIN ,LOW);

	DIO_MCAL_SET_PORT_VALUE(lcd_con->LCD_DATA_PORT ,DATA);

	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_EN_PORT , lcd_con->LCD_EN_PIN ,HIGH);
	_delay_ms(2);

	DIO_MCAL_SET_PIN_VALUE(lcd_con->LCD_EN_PORT , lcd_con->LCD_EN_PIN ,LOW);
}

void WRITE_STRING(struct lcd_config *lcd_con , u8 *DATA)
{
	u8 index = 0;
	    while (DATA[index] != '\0') {


	        SEND_CHAR(lcd_con, DATA[index]);
	        index++;
	    }

}

void CLEAR_DIS(struct lcd_config *lcd_con)
{
	SEND_COMM(lcd_con , CLREAR_DIS);

}

void LCD_RETURN_HOME(struct lcd_config *lcd_con ){
	SEND_COMM(lcd_con , RETURN_HOME);
}





u8 LCD_CONVERT_NUM_TO_CHAR(u16 NUMBER){ // 3l4an keypad btb3t ra2m w lcd bttb3 char NUMBER -> INPUT

	return (NUMBER + 0x30);
}



void convert_s32_t0_string(u16 VALUE , u8 *str)
{
	memset((u8 *)str , '\0' , 4);
	sprintf(str , "%d" , VALUE);
}
