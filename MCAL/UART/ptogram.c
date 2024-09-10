/*
 * ptogram.c
 *
 *  Created on: Aug 8, 2024
 *      Author: Maryam
 */

/* ******************************INCLUDES ***********************************
 *
 */

#include "../../LIBRARY\STD_TYPE.h"
#include "../../LIBRARY\BIT_MATH.h"
#include "private.h"
#include "config.h"
#include "interface.h"




void UART_INTI(){
	// TO APPLY UCSRC
	SET_( *UART_UCSRC , UART_UCSRC_URSEL);

	//MODE SELECT
	*UART_UCSRC |= (USART_MODE_SELECT << UART_UCSRC_UMSEL);//

   // PIRATIY SEL

	*UART_UCSRC |= (USART_PARATIY_MODE << UART_UCSRC_UPM0);

	//STOP BIT

	*UART_UCSRC |= ( USART_STOP_BIT << UART_UCSRC_USBS);

	// CHAR SELECT

	*UART_UCSRC |= (USART_CHAR_SIZE_8BITS_UCSZ1 << UART_UCSRC_UCSZ0 );
	*UART_UCSRB |= (USART_CHAR_SIZE_8BITS_UCSZ2 << UART_UCSRB_UCSZ2 );

	// BOUD

	*UART_UBRRL = 51 ;

	// EN -

	SET_(*UART_UCSRB , UART_UCSRB_RXEN);
	SET_(*UART_UCSRB , UART_UCSRB_TXEN);

}



void UART_TRANSIMMIT(u8 U16DATA){
	while(GET_(*UART_UCSRA , UART_UCSRA_UDRE) == 0);

	*UART_UDR = U16DATA;


}




void UART_RECEIVE( u8 *U16DATA){

	while(GET_(*UART_UCSRA , UART_UCSRA_RXC) == 0);

		*U16DATA = *UART_UDR ;

}

void UART_SEND_STRING(u8 *U8DATA){

	while(GET_(*UART_UCSRA , UART_UCSRA_TXC) == 0);

	   u8 Data_count = 0;
	  for(Data_count = 0 ; U8DATA != '\0' ; Data_count ++) {

	 UART_TRANSIMMIT(U8DATA[Data_count]);

		    }

	}



