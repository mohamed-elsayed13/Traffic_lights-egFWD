/*
 * BUTTON.c
 *
 * Created: 28/10/2022 02:30:10 م
 *  Author: Mohamed Elsayed
 */ 
#include "BUTTON.h"
/*****************************************************************************
* Function Name: BUTTON_init
* Purpose      : Set Pin Direction as input
* Parameters   : uint8_t buttonPort,uint8_t buttonPin
* Return value : void
*****************************************************************************/
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin){
	DIO_init(buttonPort,buttonPin,IN);	
}
/*****************************************************************************
* Function Name: BUTTON_read
* Purpose      : Get Pin value(Pressed/Not_Pressed)
* Parameters   : uint8_t buttonPort,uint8_t buttonPin,uint8_t *value
* Return value : void
*****************************************************************************/
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value){
	DIO_read(buttonPort,buttonPin,value);
}
