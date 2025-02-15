/*
 * private.h
 *
 *  Created on: Aug 8, 2024
 *      Author: Maryam
 */

#ifndef MCAL_UART_PRIVATE_H_
#define MCAL_UART_PRIVATE_H_


#define UART_UDR          ((volatile u8*)0x2C)
#define UART_UCSRA        ((volatile u8*)0x2B)
#define UART_UCSRB        ((volatile u8*)0X2A)
#define UART_UCSRC        ((volatile u8*)0x40)
#define UART_UBRRH        ((volatile u8*)0x40)
#define UART_UBRRL        ((volatile u8*)0x29)




/* ********************* PINS AND FUNCTIONS ******************************/



#define UART_UCSRA_RXC      7
#define UART_UCSRA_TXC      6
#define UART_UCSRA_UDRE     5


#define UART_UCSRB_RXEN     4
#define UART_UCSRB_TXEN     3
#define UART_UCSRB_UCSZ2    2
#define UART_UCSRB_RXB8     1
#define UART_UCSRB_TXB8     0


#define UART_UCSRC_URSEL    7
#define UART_UCSRC_UMSEL    6
#define UART_UCSRC_UPM1     5
#define UART_UCSRC_UPM0     4
#define UART_UCSRC_USBS     3
#define UART_UCSRC_UCSZ1    2
#define UART_UCSRC_UCSZ0    1


#define UART_UBRRH_URSEL    7










#endif /* MCAL_UART_PRIVATE_H_ */
