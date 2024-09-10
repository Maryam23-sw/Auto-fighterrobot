/*
 * Config.h
 *
 *  Created on: Aug 4, 2024
 *      Author: Maryam
 */

#ifndef MCAL_ADC_CONFIG_H_
#define MCAL_ADC_CONFIG_H_


/*
 * VOLTAGE REFRENCE
 * 1-ACD_VREF_AREF
 * 2-ACD_VREF_AVCC
 * 3-ACD_VREF_2_56
 */

#define ADC_VOLTAGE_REFRENCE ADC_VREF_AVCC


/* OPTIONS
 * 1-ADC_PRESCALER_2
 * 2- ADC_PRESCALER_4
 * 3- ADC_PRESCALER_8
 * 4- ADC_PRESCALER_16
 * 5- ADC_PRESCALER_32
 * 6- ADC_PRESCALER_64
 * 7- ADC_PRESCALER_128

 */

#define ADC_PRESCALER    ADC_PRESCALER_128


#endif /* MCAL_ADC_CONFIG_H_ */
