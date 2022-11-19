/*
 * Traffic_lights.c
 *
 * Created: 12/11/2022 10:08:29 AM
 * Author : Mohamed Elsayed
 */ 

#include "Application\APP.h"

extern EN_CARState_t state;
void ISR_Ovf_Timer0();
int main(void)
{
    APP_init();
	timer0_ovf_isr=ISR_Ovf_Timer0;
	while (1) 
    {
		APP_start();
    }
}

ISR(INT0_vect){
	if(state<CAR_YELLOW_ST||state>=PED_YELLOW_ST){
	TIMER0_off();
	TIMER0_on();
	state=5;
	}
	else{
		/*Do nothing*/
	}
}

void ISR_Ovf_Timer0(){
	static uint8_t counter=0;			
	counter++;
	if(counter==61){	//every second 
		state++;
		counter=0;
		if(state==20){state=0;}
	}
	
}