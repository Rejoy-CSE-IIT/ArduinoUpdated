
#ifndef LED_DIAG_H
#define LED_DIAG_H

//You need a couple of other things in the header file. One is an #include statement
// that gives you access to the standard types and constants of the Arduino
// language (this is automatically added to normal sketches, but not to libraries). 
//It looks like this (and goes above the class definition given previously):

#ifdef __cplusplus

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <elapsedMillis.h>
#include"constant_LED.h"

class LED_diag
{
public:
	LED_diag(int, int);

	void LED_STEPS();
	void initialize_HardWare();
	int                                                   _STATE;
	int                                                  _Button;


#if TEST
	int                                                 _Button_test;
	void delay_timer(int);
#endif

private:
	int                                                 _pinLED;
	int                                              _pinBUTTON;


};

#endif

#endif
