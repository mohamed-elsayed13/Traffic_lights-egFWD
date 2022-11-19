/*
 * BUTTON.h
 *
 * Created: 28/10/2022 02:30:25 م
 *  Author: Mohamed Elsayed
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO_DRIVER/DIO.h"

#define PRESSEED 0
#define NOT_PRESSEED 1

void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);


#endif /* BUTTON_H_ */