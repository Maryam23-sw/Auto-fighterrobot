/*
 * BUTT_PROGRAM.c
 *
 *  Created on: Jul 28, 2024
 *      Author: sultan
 *
 */

#include "../../LIBRARY\STD_TYPE.h"
#include "BUTT_INTERFACE.h"
#include "../../MCAL/DIO/INTERFACE.h"
#include <util/delay.h>

void BUTT_INTI(u8 U8PORT , u8 U8PIN){

	DIO_MCAL_SET_PORT_DIRECTION(U8PORT , U8PIN);

}

void BUTT_READ(u8 U8PORT , u8 U8PIN , u8 *READING){

	DIO_MCAL_GET_PIN_VALUE(U8PORT , U8PIN , &READING);
}


