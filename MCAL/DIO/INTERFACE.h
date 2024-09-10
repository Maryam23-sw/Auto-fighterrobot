/*
 * INTERFACE.h
 *
 *  Created on: Jul 24, 2024
 *      Author: Maryam
 */

#ifndef MCAL_DIO_INTERFACE_H_
#define MCAL_DIO_INTERFACE_H_



/* ********************************include*****************************/




/* ****************************preprocessor director***************************/

#define DIO_pin_0  0
#define DIO_pin_1  1
#define DIO_pin_2  2
#define DIO_pin_3  3
#define DIO_pin_4  4
#define DIO_pin_5  5
#define DIO_pin_6  6
#define DIO_pin_7  7


#define DIO_PPORTA  0
#define DIO_PPORTB  1
#define DIO_PPORTC  2
#define DIO_PPORTD  3


#define OUTPUT      1
#define INPUT       0

#define HIGH       1
#define LOW        0

#define OUTPUT_PORT          0xff
#define INPUT_PORT           0x00


#define HIGH_PORT          0xff
#define LOW_PORT           0x00


/* ******************************prototypes****************************/
/* ******************************FORPINS*******************************/

void DIO_MCAL_SET_PIN_DIRECTION (u8 U8PORT , u8 U8PIN , u8 U8DIREC);
void DIO_MCAL_SET_PIN_VALUE (u8 U8PORT , u8 U8PIN,u8 U8VALUE);
void DIO_MCAL_GET_PIN_VALUE (u8 U8PORT , u8 U8PIN , u8 *U8VALUE);


/* *********************************FORPORTS*********/



void DIO_MCAL_SET_PORT_DIRECTION (u8 U8PORT ,  u8 U8DIREC);
void DIO_MCAL_SET_PORT_VALUE (u8 U8PORT , u8 U8VALUE);
void DIO_MCAL_GET_PORT_VALUE (u8 U8PORT , u8 *U8VALUE);






#endif /* MCAL_DIO_INTERFACE_H_ */
