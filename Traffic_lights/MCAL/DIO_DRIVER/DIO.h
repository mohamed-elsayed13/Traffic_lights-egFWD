/*
 * DIO.h
 *
 * Created: 26/10/2022 12:46:56 AM
 *  Author: Mohamed Elsayed
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "..\..\Utilities\registers.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//Direction defines
#define  IN 0
#define  OUT 1
//value defines
#define  LOW 0
#define  HIGH 1
 
void DIO_init(uint8_t portnumber,uint8_t pinnumber,uint8_t direction); //Initialize DIO direction

void DIO_write(uint8_t portnumber,uint8_t pinnumber,uint8_t value); //write data to DIO

void DIO_toggle(uint8_t portnumber,uint8_t pinnumber); //toggle DIO

void DIO_read(uint8_t portnumber,uint8_t pinnumber,uint8_t* value);//Read DIO



#endif /* DIO_H_ */