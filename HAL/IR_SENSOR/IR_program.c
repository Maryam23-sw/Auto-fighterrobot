/*
 * IR_program.c
 *
 *  Created on: Aug 13, 2024
 *      Author: Maryam
 */

#include "../../LIBRARY\STD_TYPE.h"
#include "../../MCAL/DIO/INTERFACE.h"
#include "../../MCAL/ADC/interface.h"
#include "IR_interface.h"



volatile u8 ir_status = 0;       // For digital sensor status
volatile u16 ir_value = 0;       // For analog sensor value


// Initialize the IR sensor (Digital Input)
void IR_Sensor_Init(u8 U8PORT, u8 U8PIN) {
    // Set the pin connected to the IR sensor as input
    DIO_MCAL_SET_PIN_DIRECTION(U8PORT, U8PIN, INPUT);
}

// Initialize the IR sensor (Analog Input)
void IR_Sensor_Init_Analog(u8 U8CHANNEL) {
    // Initialize the ADC for the specific channel
    ADC_INTI();
}

// Read the IR sensor (Digital Input)
void IR_Sensor_Read(u8 U8PORT, u8 U8PIN) {
    // Get the pin value and store it in ir_status
    DIO_MCAL_GET_PIN_VALUE(U8PORT, U8PIN, &ir_status);
}

// Read the IR sensor (Analog Input)
void IR_Sensor_Read_Analog(u8 U8CHANNEL) {
    // Start ADC conversion and store the value in ir_value
    ADC_START_CONVERSION(U8CHANNEL, &ir_value);
}

