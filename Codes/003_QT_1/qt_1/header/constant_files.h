#ifndef CONSTANT_FILES
#define CONSTANT_FILES
/*
Have a look at hardware/arduino/cores/arduino/Arduino.h (at least in Arduino 1.0.1 software), lines 18 and 19:

 #define HIGH 0x1
 #define LOW  0x0
*/

#ifdef __cplusplus

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif


	const int                                               BUTTON_PORT_09 = 9; 
	const int                                                 LED_PORT_13 = 13; 

	const uint8_t                                 UNPRESSED_VALUE_BUTTON = LOW;  
	const uint8_t                                 PRESSED_VALUE_BUTTON = HIGH;

	const int                                                     LED_MIN = 0;
	const int                                                   LED_MAX = 255;
	
	const uint8_t                                                LED_ON = HIGH;  
	const uint8_t                                               LED_OFF = LOW;
	
	const int                                           TIMER_INITIAL_VALUE = 0;
	const int                                         TIMER_TARGET_VALUE = 1000;
	const int                                                DELAY_VALUE = 5000;
	const int                                                  BAUD_RATE = 9600;
	
	
	#define RED_LED                                                            9
	#define GREEN_LED                                                          10
	#define BLUE_LED                                                           11 

#endif
#endif