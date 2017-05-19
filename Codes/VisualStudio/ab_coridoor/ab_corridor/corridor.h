#ifndef CORRIDOR_H
#define CORRIDOR_H
 
#ifdef __cplusplus

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <elapsedMillis.h>
#include "constant_corridor.h"

class corridor
{
public:
	corridor(int, int);
	void delay_timer(int);
	void LED_STEPS();
	void initialize_hardware();
	elapsedMillis                                        _timer;
	int                                                  _STATE;
	int                                                 _Button;
#if TEST
	int                                                 _Button_test;
#endif

private:
	int                                                 _pinLED;
	int                                              _pinBUTTON;


};
#endif
#endif