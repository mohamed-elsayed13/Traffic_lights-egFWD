/*
 * APP.h
 *
 * Created: 12/11/2022 10:35:48 AM
 *  Author: Mohamed Elsayed
 */ 


#ifndef APP_H_
#define APP_H_
#include "..\ECUAL\BUTTON_DRIVER\BUTTON.h"
#include "..\ECUAL\LED_DRIVER\LED.h"
#include "..\MCAL\TIMER0_DRIVER\TIMER0.h"
#include "..\MCAL\INTERRUPT_DRIVER\INTERRUPT.h"
#define CAR_GREEN 0
#define CAR_YELLOW 1
#define CAR_RED 2
#define PED_GREEN 0
#define PED_YELLOW 1
#define PED_RED 2
#define CROSSWALK 2
typedef enum EN_CARState_t
{
	CAR_GREEN_ST, CAR_YELLOW_ST=5,ON_YELLOW_ST=6,OFF_YELLOW_ST2=7,ON_YELLOW_ST2=8,OFF_YELLOW_ST3=9,
	CAR_RED_ST=10,PED_YELLOW_ST=15,ON_YELLOW_ST3=16,OFF_YELLOW_ST4=17,ON_YELLOW_ST4=18,OFF_YELLOW_ST5=19
}EN_CARState_t;

void APP_init();
void APP_start();
void CAR_green_state();
void CAR_yellow_state();
void CAR_red_state();

#endif /* APP_H_ */