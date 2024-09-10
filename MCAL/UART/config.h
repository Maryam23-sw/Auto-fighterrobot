/*
 * config.h
 *
 *  Created on: Aug 8, 2024
 *      Author: Maryam
 */

#ifndef MCAL_UART_CONFIG_H_
#define MCAL_UART_CONFIG_H_


#define USART_STOP_1BIT      0
#define USART_STOP_2BITS     1


#define USART_STOP_BIT       USART_STOP_1BIT


#define USART_ASYNCH         0
#define USART_SYNCH          1


#define USART_MODE_SELECT   USART_ASYNCH



#define USART_PARATIY_DIABLE         0
#define USART_PARATIY_EVEN           1
#define USART_PARATIY_ODD            3



#define USART_PARATIY_MODE   USART_PARATIY_DIABLE


#define USART_CHAR_SIZE_8BITS_UCSZ1   3
#define USART_CHAR_SIZE_8BITS_UCSZ2   0

#define USART_CHAR_SIZE_9BITS_UCSZ1   3
#define USART_CHAR_SIZE_9BITS_UCSZ2   1












#endif /* MCAL_UART_CONFIG_H_ */
