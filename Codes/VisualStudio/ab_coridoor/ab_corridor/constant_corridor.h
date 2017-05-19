#ifndef CONSTANT_CORRIDOR_H
#define CONSTANT_CORRIDOR_H
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

        #define                                                               TEST true
		#define                                                      BUTTON_PORT_09   9 
		#define                                                        LED_PORT_13   13 

		#define                                            UNPRESSED_VALUE_BUTTON   LOW 
		#define                                             PRESSED_VALUE_BUTTON   HIGH 

		#define                                                             LED_MIN   0 
		#define                                                            LED_MAX  255 

		#define                                                            LED_ON  HIGH 
		#define                                                           LED_OFF   LOW 

		#define                                                 TIMER_INITIAL_VALUE   0 
		#define                                                TIMER_TARGET_VALUE  1000 
		#define                                                      DELAY_VALUE   5000 
		#define                                                         BAUD_RATE  9600 

#endif
#endif