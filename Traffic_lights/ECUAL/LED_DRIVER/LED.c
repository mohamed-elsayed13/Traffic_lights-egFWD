/*
 * LED.c
 *
 * Created: 28/10/2022 11:31:37 ص
 *  Author: Mohamed Elsayed
 */ 
#include "LED.h"
/*****************************************************************************
* Function Name: LED_init
* Purpose      : Set Pin Direction as output
* Parameters   : uint8_t ledPort,uint8_t ledPin
* Return value : void
*****************************************************************************/
void LED_init(uint8_t ledPort,uint8_t ledPin){
	DIO_init(ledPort,ledPin,OUT); // Output device
}
/*****************************************************************************
* Function Name: LED_on
* Purpose      : Set Pin Output to High
* Parameters   : uint8_t ledPort,uint8_t ledPin
* Return value : void
*****************************************************************************/
void LED_on(uint8_t ledPort,uint8_t ledPin){
	DIO_write(ledPort,ledPin,HIGH);
}
/*****************************************************************************
* Function Name: LED_off
* Purpose      : CLear Pin output to be Low
* Parameters   : uint8_t ledPort,uint8_t ledPin
* Return value : void
*****************************************************************************/
void LED_off(uint8_t ledPort,uint8_t ledPin){
	DIO_write(ledPort,ledPin,LOW);
}
/*****************************************************************************
* Function Name: LED_toggle
* Purpose      : toggle Pin value
* Parameters   : uint8_t ledPort,uint8_t ledPin
* Return value : void
*****************************************************************************/
void LED_toggle(uint8_t ledPort,uint8_t ledPin){
	DIO_toggle(ledPort,ledPin);
}
