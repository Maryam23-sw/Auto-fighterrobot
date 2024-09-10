/*
 * interface.h
 *
 *  Created on: Aug 8, 2024
 *      Author: Maryam
 */

#ifndef MCAL_UART_INTERFACE_H_
#define MCAL_UART_INTERFACE_H_


/* *********************** prototype *************************************/

void UART_INTI();

void UART_TRANSIMMIT(u8 U16DATA);

void UART_RECEIVE( u8 *U16DATA);

void UART_SEND_STRING(u8 *U8DATA);









#endif /* MCAL_UART_INTERFACE_H_ */
