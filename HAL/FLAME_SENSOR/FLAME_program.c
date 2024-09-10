/*
 * FLAME_program.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Maryam
 */


#include "../../LIBRARY/STD_TYPE.h"
#include "../../LIBRARY/BIT_MATH.h"
#include "../../MCAL/DIO/INTERFACE.h"
#include "../../MCAL/ADC/interface.h"
#include "FLAME_interface.h"

// Global variables to store the sensor readings
volatile u8 flame_status = 0;      // For digital flame sensor status
volatile u16 flame_value = 0;      // For analog flame sensor value

// Initialize the flame sensor (Digital Input)
void Flame_Sensor_Init(u8 U8PORT, u8 U8PIN) {
    // Set the pin connected to the flame sensor as input
    DIO_MCAL_SET_PIN_DIRECTION(U8PORT, U8PIN, INPUT);
}

// Initialize the flame sensor (Analog Input)
void Flame_Sensor_Init_Analog(u8 U8CHANNEL) {
    // Initialize the ADC for the specific channel
    ADC_INTI();
}

// Read the flame sensor (Digital Input)
void Flame_Sensor_Read(u8 U8PORT, u8 U8PIN) {
    // Get the pin value and store it in flame_status
    DIO_MCAL_GET_PIN_VALUE(U8PORT, U8PIN, &flame_status);
}

// Read the flame sensor (Analog Input)
void Flame_Sensor_Read_Analog(u8 U8CHANNEL) {
    // Start ADC conversion and store the value in flame_value
    ADC_START_CONVERSION(U8CHANNEL, &flame_value);
}
