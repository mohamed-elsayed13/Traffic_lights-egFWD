/*
 * APP.c
 *
 * Created: 12/11/2022 10:35:34 AM
 *  Author: Mohamed Elsayed
 */ 
#include "APP.h"
EN_CARState_t state=CAR_GREEN_ST;

/*****************************************************************************
* Function Name: APP_init
* Purpose      : Initialize all the modules we will use(LEDs,Button,Timer0,Interrupt)
* Parameters   : void
* Return value : void
*****************************************************************************/
void APP_init(){
	TIMER0_normaMode_init();
	TIMER0_off();
	LED_init(PORT_A,CAR_GREEN);
	LED_init(PORT_A,CAR_YELLOW);
	LED_init(PORT_A,CAR_RED);
	LED_init(PORT_B,PED_GREEN);
	LED_init(PORT_B,PED_YELLOW);
	LED_init(PORT_B,PED_RED);
	BUTTON_init(PORT_D,CROSSWALK);
	INTERRUPT_init();
	
}
/*****************************************************************************
* Function Name: APP_start
* Purpose      : Start Normal Mode
* Parameters   : void
* Return value : void
*****************************************************************************/
void APP_start(){
	TIMER0_on();
	switch(state){
		case CAR_GREEN_ST:
		CAR_green_state();
		break;
		case CAR_YELLOW_ST:
		CAR_yellow_state();
		LED_off(PORT_A,CAR_YELLOW);
		LED_off(PORT_B,PED_YELLOW);
		break;
		case ON_YELLOW_ST:
		CAR_yellow_state();
		LED_on(PORT_A,CAR_YELLOW);
		LED_on(PORT_B,PED_YELLOW);
		break;
		case OFF_YELLOW_ST2:
		CAR_yellow_state();
		LED_off(PORT_A,CAR_YELLOW);
		LED_off(PORT_B,PED_YELLOW);
		break;
		case ON_YELLOW_ST2:
		CAR_yellow_state();
		LED_on(PORT_A,CAR_YELLOW);
		LED_on(PORT_B,PED_YELLOW);
		break;
		case OFF_YELLOW_ST3:
		CAR_yellow_state();
		LED_off(PORT_A,CAR_YELLOW);
		LED_off(PORT_B,PED_YELLOW);
		break;
		case CAR_RED_ST:
		CAR_red_state();
		break;
		case PED_YELLOW_ST:
		CAR_yellow_state();
		break;
		case ON_YELLOW_ST3:
		CAR_yellow_state();
		LED_on(PORT_A,CAR_YELLOW);
		LED_on(PORT_B,PED_YELLOW);
		break;
		case OFF_YELLOW_ST4:
		CAR_yellow_state();
		LED_off(PORT_A,CAR_YELLOW);
		LED_off(PORT_B,PED_YELLOW);
		break;
		case ON_YELLOW_ST4:
		CAR_yellow_state();
		LED_on(PORT_A,CAR_YELLOW);
		LED_on(PORT_B,PED_YELLOW);
		break;
		case OFF_YELLOW_ST5:
		CAR_yellow_state();
		LED_off(PORT_A,CAR_YELLOW);
		LED_off(PORT_B,PED_YELLOW);
		break;
		default:
		break;
	}
}
/*****************************************************************************
* Function Name: CAR_green_state
* Purpose      : Car Green LED ON and pedestrians red LED off for 5 sec
* Parameters   : void
* Return value : void
*****************************************************************************/
void CAR_green_state(){
	LED_on(PORT_A,CAR_GREEN);
	LED_on(PORT_B,PED_RED);
	LED_off(PORT_A,CAR_YELLOW);
	LED_off(PORT_B,PED_YELLOW);
	LED_off(PORT_A,CAR_RED);
	LED_off(PORT_B,PED_GREEN);
}
/*****************************************************************************
* Function Name: CAR_yellow_state
* Purpose      : Car and Pedestrians Yellow LEDs blinking for 5 sec
* Parameters   : void
* Return value : void
*****************************************************************************/
void CAR_yellow_state(){
	LED_off(PORT_A,CAR_GREEN);
	LED_off(PORT_B,PED_RED);
	LED_off(PORT_A,CAR_RED);
	LED_off(PORT_B,PED_GREEN);
}
/*****************************************************************************
* Function Name: CAR_red_state
* Purpose      : Car red led On and pedestrians green LED Off for 5 sec
* Parameters   : void
* Return value : void
*****************************************************************************/
void CAR_red_state(){
	LED_off(PORT_A,CAR_GREEN);
	LED_off(PORT_B,PED_RED);
	LED_off(PORT_A,CAR_YELLOW);
	LED_off(PORT_B,PED_YELLOW);
	LED_on(PORT_A,CAR_RED);
	LED_on(PORT_B,PED_GREEN);
}