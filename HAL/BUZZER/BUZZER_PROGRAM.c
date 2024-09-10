/*
 * BUZZER_PROGRAM.c
 *
 *  Created on: Jul 28, 2024
 *      Author: Maryam
 */



#include "../../LIBRARY\STD_TYPE.h"
#include "INTERFACE.h"
#include "../../MCAL/DIO/INTERFACE.h"
#include <util/delay.h>







void BUZZER_INTI(u8 U8PORT , u8 U8PIN){

	DIO_MCAL_SET_PIN_DIRECTION ( U8PORT , U8PIN , OUTPUT);

}



void BUZZER_ON(u8 U8PORT , u8 U8PIN){

	DIO_MCAL_SET_PIN_DIRECTION ( U8PORT , U8PIN , HIGH);

}


void BUZZER_OFF(u8 U8PORT , u8 U8PIN){

	DIO_MCAL_SET_PIN_DIRECTION ( U8PORT , U8PIN , LOW);

}


void BUZZER_ONCE(u8 U8PORT , u8 U8PIN ){

	BUZZER_ON(U8PORT , U8PIN);
	_delay_ms(SHORT_BEEP );
	BUZZER_OFF(U8PORT , U8PIN);
}

void BUZZER_TWICE(u8 U8PORT , u8 U8PIN  , u8 U16DURATION){
	u8 count = 0 ;
	while(count <= TWICE){
		BUZZER_ONCE(U8PORT , U8PIN);
		_delay_ms(SHORT_BEEP );
	}
}



void BUZZER_TRIPLE(u8 U8PORT , u8 U8PIN  , u8 U16DURATION){
      u8 count = 0 ;
	while(count <= TRIPLE ){
		BUZZER_ONCE(U8PORT , U8PIN);
		_delay_ms(SHORT_BEEP);


	}
}




void BUZZER_LONG(u8 U8PORT , u8 U8PIN ){

	BUZZER_ON(U8PORT , U8PIN);
	_delay_ms(LONG_BEEP);
	BUZZER_OFF(U8PORT , U8PIN);

}


