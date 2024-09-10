/*
 * private.h
 *
 *  Created on: Aug 4, 2024
 *      Author: sultan
 */

#ifndef MCAL_ADC_PRIVATE_H_
#define MCAL_ADC_PRIVATE_H_
/* ******************REGISTERS ADDRESS ******************************/
/* ***********************ADMUX REGISTER ***************************/
#define ADC_ADMUX       ((volatile u8*)0x27)
#define ADC_SFIOR       ((volatile u8*)0x50)
#define ADC_ADCL        ((volatile u8*)0X24)
#define ADC_ADCH        ((volatile u8*)0x25)
#define ADC_ADCSRA      ((volatile u8*)0x26)


/* ************************ ADMUX_BITS ***********************************/

#define ADC_ADMUX_MUX_0      0
#define ADC_ADMUX_MUX_1      1
#define ADC_ADMUX_MUX_2      2
#define ADC_ADMUX_MUX_3      3
#define ADC_ADMUX_MUX_4      4
#define ADC_ADMUX_ADLAR      5
#define ADC_ADMUX_REFS0      6
#define ADC_ADMUX_REFS1      7

/* ***************     ADCSRA BITS  ******************************************/
#define ADC_ADCSRA_ADPS0       0 //PINS OF PRESCALER
#define ADC_ADCSRA_ADPS01      1 //PINS OF PRESCALER
#define ADC_ADCSRA_ADPS02      2 //PINS OF PRESCALER
#define ADC_ADCSRA_ADSC        6 //PINS OF EN ON
#define ADC_ADCSRA_ADEN        7 //PINS OF EN START



#define ADC_PRESCALER_2         1
#define ADC_PRESCALER_4         2
#define ADC_PRESCALER_8         3
#define ADC_PRESCALER_16        4
#define ADC_PRESCALER_32        5
#define ADC_PRESCALER_64        6
#define ADC_PRESCALER_128       7


#define ADC_LAR_BIT             8

#define ADC_VREF_AREF           0
#define ADC_VREF_AVCC           1
#define ADC_VREF_2_56           3














#endif /* MCAL_ADC_PRIVATE_H_ */

