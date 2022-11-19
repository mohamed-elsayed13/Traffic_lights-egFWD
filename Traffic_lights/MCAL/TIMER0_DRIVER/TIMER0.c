/*
 * TIMER0.c
 *
 * Created: 8/19/2022 11:10:43 AM
 *  Author: Mohamed Elsayed
 */ 
#include "TIMER0.h"

void (*timer0_ovf_isr)(void);

/*****************************************************************************
* Function Name: TIMER0_normaMode_init
* Purpose      : init timer in normal mode with 1024 prescaler
* Parameters   : void
* Return value : void
*****************************************************************************/
void TIMER0_normaMode_init(void){
	SETBIT(TCCR0,CS00);// prescaler 1024
	SETBIT(TCCR0,CS02);// prescaler 1024
	SETBIT(TCCR0,FOC0);
	SETBIT(TIMSK,TOIE0); // enable timer ovf interrupt
	SETBIT(SREG, 7);	// enable global interrupt
	
}
/*****************************************************************************
* Function Name: TIMER0_on
* Purpose      : Turn timer0 on with 1024 prescaler
* Parameters   : void
* Return value : void
*****************************************************************************/
void TIMER0_on(void){
	SETBIT(TCCR0,CS00);
	SETBIT(TCCR0,CS02);
}
/*****************************************************************************
* Function Name: TIMER0_off
* Purpose      : Turn timer0 off
* Parameters   : void
* Return value : void
*****************************************************************************/
void TIMER0_off(void){
	CLRBIT(TCCR0,CS00);
	CLRBIT(TCCR0,CS02);
}

ISR(TIMER0_OVF_vect){
	timer0_ovf_isr();
}
