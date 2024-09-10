/*
 * program.c
 *
 *  Created on: Aug 21, 2024
 *      Author: Maryam
 */

//#include "../MCAL/DIO/INTERFACE.h"
//#include "../MCAL/ADC/interface.h"
//#include "../MCAL/UART/interface.h"
#include "../HAL/LED/INTERFACE.h"
#include "interface.h"
#include <util/delay.h>


u8 fireDetected ;
u16 temperature;
u8 fireDetected;
u16 temperature;

void initializeSystem(void) {
	UART_INTI();
	ADC_INTI();

    LED_H_INTIAIL_1LED(DIO_PPORTD, RED_LED_PIN);
    LED_H_INTIAIL_1LED(DIO_PPORTC, BLUE_LED_PIN);

    // Initialize motor pins
    DIO_MCAL_SET_PIN_DIRECTION(DIO_PPORTB, IN1_PIN, OUTPUT);
    DIO_MCAL_SET_PIN_DIRECTION(DIO_PPORTB, IN2_PIN , OUTPUT);

    // Initialize other pins
    DIO_MCAL_SET_PIN_DIRECTION(DIO_PPORTD, MOTOR_PIN,OUTPUT);
    DIO_MCAL_SET_PIN_DIRECTION(DIO_PPORTC, BUZZER_PIN, OUTPUT);
}

void handleFireDetection(void) {
    DIO_MCAL_GET_PIN_VALUE(DIO_PPORTA, FLAME_DETECT, &fireDetected);

    UART_TRANSIMMIT(fireDetected);

    if (fireDetected == 1) {
        // Fire detected
    	LED_H_TURN_ON_OR_OFF(DIO_PPORTD, RED_LED_PIN ,HIGH );

        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTC, BUZZER_PIN, HIGH);
        _delay_ms(3000);

        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTD, MOTOR_PIN, HIGH);
        LED_H_TURN_ON_OR_OFF(DIO_PPORTC, BLUE_LED_PIN , HIGH );
        _delay_ms(3000);

        // Reset fire detection state
        fireDetected = 0;
    } else {
        // No fire detected
    	LED_H_TURN_ON_OR_OFF(DIO_PPORTD, RED_LED_PIN ,LOW);
        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTD, MOTOR_PIN, LOW);
        LED_H_TURN_ON_OR_OFF(DIO_PPORTC, BLUE_LED_PIN , LOW );
        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTC, BUZZER_PIN, LOW);
    }
}

void handleTemperature(void) {
    ADC_START_CONVERSION(ADC_CHANNEL6, &temperature);


    temperature = temperature/ 2;

    controlFan();
}

void controlFan(void) {
    if (temperature >= TEMP_THRESHOLD) {
        // Turn on fan
        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTB, IN1_PIN, HIGH);
        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTB, IN2_PIN, LOW);
    } else {
        // Turn off fan
        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTB, IN1_PIN, LOW);
        DIO_MCAL_SET_PIN_VALUE(DIO_PPORTB, IN2_PIN, LOW);
    }
}
