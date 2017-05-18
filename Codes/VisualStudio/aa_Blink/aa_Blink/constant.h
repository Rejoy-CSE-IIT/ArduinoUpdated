

#ifndef STD_BASE
#define STD_BASE

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

#define                                            LED_PORT_13    13  
#define                                     DELAY_MILLI_SECOND   1000 

#endif
#endif