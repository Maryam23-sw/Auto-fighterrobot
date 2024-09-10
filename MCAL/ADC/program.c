/*
 * program.c
 *
 *  Created on: Aug 4, 2024
 *      Author: Maryam
 */
#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"
#include "private.h"
#include "config.h"
#include "interface.h"

void ADC_INTI()
{
	*ADC_ADMUX|=(ADC_VOLTAGE_REFRENCE << ADC_ADMUX_REFS0);

	*ADC_ADCSRA|=ADC_PRESCALER;

	CLEAR_(*ADC_ADMUX , ADC_ADMUX_ADLAR);

	SET_(*ADC_ADCSRA , ADC_ADCSRA_ADEN);


}
void ADC_START_CONVERSION(u8 U8CHANNEL , u16*VALUE)
{
	if(U8CHANNEL <= ADC_CHANNEL7)
	{
	*ADC_ADMUX|=U8CHANNEL; //INSTEAD OF ASTRIK HERE PUT IT BEFOR VOLATILE
    // *ADC_ADMUX = (*ADC_ADMUX & 0xF0) | U8CHANNEL;
	SET_(*ADC_ADCSRA , ADC_ADCSRA_ADSC );

	while(GET_(*ADC_ADCSRA ,ADC_ADCSRA_ADSC )); // CAN ADD ; INSTEAD OF {}

	*VALUE = *ADC_ADCL + (GET_(*ADC_ADCH , 0) *256 ) + (GET_(*ADC_ADCH , 1) *512 );




}
}
