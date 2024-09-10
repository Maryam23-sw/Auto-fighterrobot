/*
 * program.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Maryam
 */



#include"interface.h"
#include <util/delay.h>
#include "../../MCAL/DIO/INTERFACE.h"


void PUSH_INTI(u8 U8PORT, u8 U8PIN ){
	DIO_MCAL_SET_PIN_DIRECTION( U8PORT,  U8PIN ,INPUT);

}


void PUSH_GET_VALUE(u8 U8PORT, u8 U8PIN , u8 *VALUE){

	DIO_MCAL_GET_PIN_VALUE( U8PORT,  U8PIN ,VALUE);


}

void PULL_UP(u8 U8PORT, u8 U8PIN){
	DIO_MCAL_SET_PIN_VALUE( U8PORT,  U8PIN , HIGH);

}

