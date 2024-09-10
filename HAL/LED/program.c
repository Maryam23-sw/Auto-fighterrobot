/*
 * program.c
 *
 *  Created on: Jul 27, 2024
 *      Author: Maryam
 */


#include "../../LIBRARY\STD_TYPE.h"
#include "INTERFACE.h"
#include "../../MCAL/DIO/INTERFACE.h"
#include <util/delay.h>

void LED_H_INTIAIL_1LED (u8 U8PORT , u8 U8PIN){

	DIO_MCAL_SET_PIN_DIRECTION ( U8PORT , U8PIN , OUTPUT);// PIN DIR 5ALD TO SET OUTPUT_PORT

}

void LED_H_INTIAIL_8LED (u8 U8PORT){

	DIO_MCAL_SET_PORT_DIRECTION (U8PORT , OUTPUT_PORT);



}
void LED_H_TURN_ON_OR_OFF(u8 U8PORT , u8 U8PIN , u8 U8STAT){

	DIO_MCAL_SET_PIN_VALUE(U8PORT , U8PIN , U8STAT);

}

void LED_H_BLIINK_LED(u8 U8PORT ,u8 U8PIN){

	DIO_MCAL_SET_PIN_VALUE( U8PORT , U8PIN , HIGH_PORT);
	_delay_ms(1000);

	DIO_MCAL_SET_PIN_VALUE( U8PORT , U8PIN , LOW_PORT);
		_delay_ms(1000);


}

void LED_H_TURN_ON_OR_OFF_8LEDS(u8 U8PORT , u8 U8PIN , u8 U8STAT){

	DIO_MCAL_SET_PORT_VALUE(U8PORT ,U8STAT );


}

void LED_H_BLIINK_8LEDS(u8 U8PORT){

	DIO_MCAL_SET_PORT_VALUE(U8PORT ,HIGH_PORT );
	_delay_ms(1000);

	DIO_MCAL_SET_PORT_VALUE(U8PORT ,LOW_PORT );
		_delay_ms(1000);



}
