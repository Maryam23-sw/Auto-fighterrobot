/*
 * interface.h
 *
 *  Created on: Aug 21, 2024
 *      Author: Maryam
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_

#define FSER_pin_0  0
#define FSER_pin_1  1
#define FSER_pin_2  2
#define FSER_pin_3  3
#define FSER_pin_4  4
#define FSER_pin_5  5
#define FSER_pin_6  6
#define FSER_pin_7  7


#define FSER_PPORTA  0
#define FSER_PPORTB  1
#define FSER_PPORTC  2
#define FSER_PPORTD  3


#define OUTPUT      1
#define INPUT       0

#define HIGH       1
#define LOW        0

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00

#define RED_LED_PIN       DIO_pin_5
#define BLUE_LED_PIN      DIO_pin_1
#define MOTOR_PIN         DIO_pin_3
#define FLAME_DETECT      DIO_pin_3
#define BUZZER_PIN        DIO_pin_0
#define IN1_PIN           DIO_pin_0
#define IN2_PIN           DIO_pin_1
#define LM35_PIN          DIO_pin_6

#define ADC_CHANNEL6      6

#define TEMP_THRESHOLD    30



void initializeSystem(void);
void handleFireDetection(void);
void handleTemperature(void);
void controlFan(void);


#endif /* INTERFACE_H_ */
