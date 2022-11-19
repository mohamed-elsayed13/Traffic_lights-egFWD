/*
 * LED.h
 *
 * Created: 28/10/2022 11:31:50 ص
 *  Author: Mohamed Elsayed
 */ 
#include "..\..\MCAL\DIO_DRIVER\DIO.h"

#ifndef LED_H_
#define LED_H_

void LED_init(uint8_t ledPort,uint8_t ledPin);
void LED_on(uint8_t ledPort,uint8_t ledPin);
void LED_off(uint8_t ledPort,uint8_t ledPin);
void LED_toggle(uint8_t ledPort,uint8_t ledPin);

#endif /* LED_H_ */