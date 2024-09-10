/*
 * program.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Maryam
 *
 *
 */
#include "interface.h"
#include "../../MCAL/DIO/INTERFACE.h"
#include <util/delay.h>






u8 U8PIN_COUNT;
void SSD_INTI(u8 U8PORT ,u8 U8PINSELECTION)
{
	u8 U8PIN_COUNT;
	if(U8PINSELECTION == SSD_lowerPINS){
		for( U8PIN_COUNT = SSD_pin_0 ; U8PIN_COUNT <= SSD_pin_3 ; U8PIN_COUNT++)
		{
			DIO_MCAL_SET_PIN_DIRECTION(U8PORT , U8PIN_COUNT ,1 );
		}
	}
	else{
		for( U8PIN_COUNT = SSD_pin_4 ; U8PIN_COUNT <= SSD_pin_7 ; U8PIN_COUNT++)
				{
					DIO_MCAL_SET_PIN_DIRECTION(U8PORT , U8PIN_COUNT , 1 );
				}

	}

}
void SSD_WRITE_NUM(u8 U8PORT ,u8 U8PINSELECTION , u8 u8NUMBER)
{
	u8 VALUE;
	if(U8PINSELECTION == SSD_lowerPINS){
			for( U8PIN_COUNT = SSD_pin_0 ; U8PIN_COUNT <= SSD_pin_3 ; U8PIN_COUNT++)
			{
				VALUE=GET_(u8NUMBER , U8PIN_COUNT);
				DIO_MCAL_SET_PIN_VALUE(U8PORT , U8PIN_COUNT , VALUE);
			}
		}
		else{
			for( U8PIN_COUNT = SSD_pin_4 ; U8PIN_COUNT <= SSD_pin_7 ; U8PIN_COUNT++)
					{
				VALUE=GET_(u8NUMBER , U8PIN_COUNT);
				DIO_MCAL_SET_PIN_VALUE( U8PORT, U8PIN_COUNT , VALUE);
					}

		}


}
void SSD_COUNT_UP(u8 U8PORT ,u8 U8PINSELECTION , u8 u8NUMBER)
{
	u8 U8NUM_COUNT;

				for( U8NUM_COUNT = SSD_pin_0 ; U8NUM_COUNT <= SSD_pin_3 ; U8NUM_COUNT++)
				{
					SSD_WRITE_NUM(U8PORT , U8PINSELECTION , U8NUM_COUNT);
					_delay_ms(2000);

				}




}
void SSD_REVERSE_NUMBERS(u8 U8PORT ,u8 U8PINSELECTION ,  u8 u8NUMBER)
{
	u8 U8NUM_COUNT = 0 ;

					for( U8NUM_COUNT = u8NUMBER ; U8NUM_COUNT >= 0 ; U8NUM_COUNT--)
					{
						SSD_WRITE_NUM(U8PORT , U8PINSELECTION , U8NUM_COUNT);
						_delay_ms(700);

					}

}


