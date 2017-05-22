#ifndef CONSTANT_LED_H
#define CONSTANT_LED_H

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

#define                                                            LED_ON     0 
#define                                                            LED_OFF    1 




#define                                                 TIMER_INITIAL_VALUE   0 
#define                                                TIMER_TARGET_VALUE  1000 
#define                                                      DELAY_VALUE   5000 
#define                                                         BAUD_RATE  9600 



#endif
#endif
