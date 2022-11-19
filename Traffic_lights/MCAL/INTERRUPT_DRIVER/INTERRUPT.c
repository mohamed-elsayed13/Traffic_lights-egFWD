/*
 * INTERRUPT.c
 *
 * Created: 12/11/2022 08:10:48 PM
 *  Author: Mohamed Elsayed
 */ 
#include "INTERRUPT.h"
/*****************************************************************************
* Function Name: INTERRUPT_init
* Purpose      : Initialize External interrupt for pin INT0 as low level trigger
* Parameters   : void
* Return value : void
*****************************************************************************/
void INTERRUPT_init(void){
	SETBIT(SREG,7); //GLOBAL INTERRUPT ENABLE
	SETBIT(GICR,INT0);
	CLRBIT(MCUCR,ISC00); //lOW LEVEL ENABLE FOR INT0
	CLRBIT(MCUCR,ISC01); //lOW LEVEL ENABLE FOR INT0
	
}
