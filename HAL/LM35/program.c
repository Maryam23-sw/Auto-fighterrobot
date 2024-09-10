/*
 * program.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Maryam
 */

#include "interface.h"
void LM35_Init() {

    ADC_INTI();
}

void LM35_ReadTemperature(u8 channel, u16* temperature) {
    u16 ADC_VALUE = 0;
    ADC_START_CONVERSION(channel, &ADC_VALUE);
    *temperature = (ADC_VALUE * 500) / 1024;
}
