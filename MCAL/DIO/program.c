/*
 * program.c
 *
 *  Created on: Jul 24, 2024
 *      Author: Maryam
 */
/* ******************************include***********************************/
#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"
#include "INTERFACE.h"
#include "private.h"



u8 *PORTS_ARR[4] = {DIO_PORTA , DIO_PORTB , DIO_PORTC , DIO_PORTD};
u8 *DDRS_ARR[4] = {DIO_DDRA , DIO_DDRB , DIO_DDRC , DIO_DDRD};
u8 *PINS_ARR[4] = {DIO_PINA , DIO_PINB , DIO_PINC , DIO_PIND};



/* ******************************function implementation***********************/


/* ******************************FORPINS***************************************/


/* *****************************SET_PIN_DIRECTION *****************************/


void DIO_MCAL_SET_PIN_DIRECTION(u8 U8PORT , u8 U8PIN , u8 U8DIREC)
{
if (U8PIN <= DIO_pin_7 && U8PORT <= DIO_PPORTD ){


	if(U8DIREC == OUTPUT){
		SET_( *DDRS_ARR[U8PORT], U8PIN);
	}
	else
	{
		CLEAR_(*DDRS_ARR[U8PORT], U8PIN);
	}
}

}

/* *****************************SET_PIN_VALUE*********************************/


void DIO_MCAL_SET_PIN_VALUE(u8 U8PORT , u8 U8PIN,u8 U8VALUE)
{
	if (U8PIN <= DIO_pin_7 && U8PORT <= DIO_PPORTD ){


		if(U8VALUE == HIGH){
			SET_(*PORTS_ARR[U8PORT], U8PIN);
		}
		else
		{
			CLEAR_(*PORTS_ARR[U8PORT], U8PIN);
		}
	}

}


/* ************************GET_PIN_VALUE**************************************/



void DIO_MCAL_GET_PIN_VALUE(u8 U8PORT , u8 U8PIN , u8 *U8VALUE)
{
	if (U8PIN <= DIO_pin_7 && U8PORT <= DIO_PPORTD ){

		*U8VALUE = GET_(*PINS_ARR[U8PORT] , U8PIN );

	}

}

/* *********************************FORPORTS*********************************/



void DIO_MCAL_SET_PORT_DIRECTION(u8 U8PORT ,  u8 U8DIREC)
{

	if (U8PORT <= DIO_PPORTD)
	{

		*DDRS_ARR[U8PORT] = U8DIREC;
	}

}

/* ***********************	SET_PORT_VALUE **********************************/


void DIO_MCAL_SET_PORT_VALUE(u8 U8PORT , u8 U8VALUE)
{

	if (U8PORT <= DIO_PPORTD){


			 *PORTS_ARR[U8PORT] = U8VALUE;


	}


}

/* *****************************GET_PORT_VALUE*******************************/


void DIO_MCAL_GET_PORT_VALUE(u8 U8PORT , u8 *U8VALUE)
{
	if (U8PORT <= DIO_PPORTD){

		*U8VALUE = *PINS_ARR[U8PORT];

	}

}



