/*
 * registers.h
 *
 * Created: 26/10/2022 12:29:36 AM
 *  Author: Mohamed Elsayed
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "types.h"
/**********************************************************/
/*                        DIO Registers                   */
/**********************************************************/
//PORT A
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)
 
//PORT B
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

//PORT C
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

//PORT D
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)
//Timer0
#define TCCR0 *((volatile uint8_t*)0x53)
#define TIMSK *((volatile uint8_t*)0x59)
#define CS00 0
#define CS01 1
#define FOC0 7
#define TOIE0 0
//Interrupt
#define SREG *((volatile uint8_t*)0x5f)
#define GICR *((volatile uint8_t*)0x5b)
#define MCUCR *((volatile uint8_t*)0x55)
#define INT0 6
#define ISC00 0
#define ISC01 1

/*
ISR(INT0_vect){}
ISR(TIMER0_OVF_vect){}	
*/
#endif /* REGISTERS_H_ */