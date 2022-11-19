/*
 * DIO.c
 *
 * Created: 26/10/2022 12:47:08 AM
 *  Author: Mohamed Elsayed
 */ 
#include "DIO.h"
/*****************************************************************************
* Function Name: DIO_init
* Purpose      : Initialize PIN Direction (IN/OUT)
* Parameters   : uint8_t portnumber,uint8_t pinnumber,uint8_t direction
* Return value : void
*****************************************************************************/
void DIO_init(uint8_t portnumber,uint8_t pinnumber,uint8_t direction){
	switch(portnumber){
		case PORT_A:
		if(direction==OUT){
			DDRA |=(1<<pinnumber);
		}
		else if (direction==IN){
			DDRA &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
		case PORT_B:
		if(direction==OUT){
			DDRB |=(1<<pinnumber);
		}
		else if (direction==IN){
			DDRB &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
		case PORT_C:
		if(direction==OUT){
			DDRC |=(1<<pinnumber);
		}
		else if (direction==IN){
			DDRC &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
		case PORT_D:
		if(direction==OUT){
			DDRD |=(1<<pinnumber);
		}
		else if (direction==IN){
			DDRD &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
	}
}
/*****************************************************************************
* Function Name: DIO_write
* Purpose      : Write (High/LOW) for specific PIN 
* Parameters   : uint8_t portnumber,uint8_t pinnumber,uint8_t value
* Return value : void
*****************************************************************************/
void DIO_write(uint8_t portnumber,uint8_t pinnumber,uint8_t value){
	switch(portnumber){
		case PORT_A:
		if(value==HIGH){
			PORTA |=(1<<pinnumber);
		}
		else if (value==LOW){
			PORTA &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
		case PORT_B:
		if(value==HIGH){
			PORTB |=(1<<pinnumber);
		}
		else if (value==LOW){
			PORTB &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
		case PORT_C:
		if(value==HIGH){
			PORTC |=(1<<pinnumber);
		}
		else if (value==LOW){
			PORTC &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
		case PORT_D:
		if(value==HIGH){
			PORTD |=(1<<pinnumber);
		}
		else if (value==LOW){
			PORTD &=~(1<<pinnumber);
		}
		else{
			//error
		}
		break;
	}
}
/*****************************************************************************
* Function Name: DIO_toggle
* Purpose      : Toggle specific PIN
* Parameters   : uint8_t portnumber,uint8_t pinnumber
* Return value : void
*****************************************************************************/
void DIO_toggle(uint8_t portnumber,uint8_t pinnumber){
	switch(portnumber){
		case PORT_A:
		PORTA ^=(1<<pinnumber);
		break;
		case PORT_B:
		PORTB ^=(1<<pinnumber);
		break;
		case PORT_C:
		PORTC ^=(1<<pinnumber);
		break;
		case PORT_D:
		PORTD ^=(1<<pinnumber);
		break;
	}
}
/*****************************************************************************
* Function Name: DIO_read
* Purpose      : Read specific PIN (High/Low)
* Parameters   : uint8_t portnumber,uint8_t pinnumber,uint8_t* value
* Return value : void
*****************************************************************************/
void DIO_read(uint8_t portnumber,uint8_t pinnumber,uint8_t* value){
	switch(portnumber){
		case PORT_A:
		*value=(PINA&(1<<pinnumber))>>pinnumber;
		break;
		case PORT_B:
		*value=(PINB&(1<<pinnumber))>>pinnumber;
		break;
		case PORT_C:
		*value=(PINC&(1<<pinnumber))>>pinnumber;
		break;
		case PORT_D:
		*value=(PIND&(1<<pinnumber))>>pinnumber;
		break;
	}
}
