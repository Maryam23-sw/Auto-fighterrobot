/*
 * main.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Maryam
 */

#include "../HAL/LCD/interface.h"
#include "../MCAL/DIO/INTERFACE.h"
#include "../MCAL/UART/interface.h"
#include "../MCAL/ADC/interface.h"
#include <util/delay.h>

u8 DATA_RECEIVED = 0;

// String variables
char emergency_message[] = "DANGEROUS!";
char normal_message[] = "NORMAL";

int main(void) {
    struct lcd_config LCD2;
    LCD2.LCD_DATA_PORT = LCD_PPORTC;
    LCD2.LCD_RS_PORT = LCD_PPORTB;
    LCD2.LCD_RW_PORT = LCD_PPORTB;
    LCD2.LCD_EN_PORT = LCD_PPORTB;
    LCD2.LCD_RS_PIN = LCD_pin_2;
    LCD2.LCD_RW_PIN = LCD_pin_1;
    LCD2.LCD_EN_PIN = LCD_pin_0;

    // Initialize LCD
    LCD_INTI(&LCD2);
    LED_H_INTIAIL_1LED(DIO_PPORTB, DIO_pin_3);
    LED_H_INTIAIL_1LED(DIO_PPORTB, DIO_pin_4);

    // Initialize UART
    UART_INTI();



    while (1) {
        // Receive data via UART
        UART_RECEIVE(&DATA_RECEIVED);

        if (DATA_RECEIVED == 1) {
            // Handle emergency situation
        	_delay_ms(2000);
            WRITE_STRING(&LCD2, emergency_message);
            _delay_ms(8000);
            LED_H_TURN_ON_OR_OFF(DIO_PPORTB, DIO_pin_3, HIGH);
            LED_H_TURN_ON_OR_OFF(DIO_PPORTB, DIO_pin_4, LOW);

            _delay_ms(6000);
            CLEAR_DIS(&LCD2);
//            LCD_RETURN_HOME(&LCD2);
            _delay_ms(6000);
            DATA_RECEIVED = 0;
        } else {
            // Normal operation_delay_ms(2000);
            LED_H_TURN_ON_OR_OFF(DIO_PPORTB, DIO_pin_3, LOW);
            LED_H_TURN_ON_OR_OFF(DIO_PPORTB, DIO_pin_4, HIGH);
            WRITE_STRING(&LCD2, normal_message);
            _delay_ms(6000);
            CLEAR_DIS(&LCD2);
//            LCD_RETURN_HOME(&LCD2);
            DATA_RECEIVED = 0;
        }
    }

    return 0;
}
