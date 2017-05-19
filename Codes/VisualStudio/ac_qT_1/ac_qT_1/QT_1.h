
#ifndef QT_1_H
#define QT_1_H

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

 

class QT_1
{



private:
	int _led_port;

public:
	QT_1(int);
	void  writeLeds(char, int);
	void  Initialize_HardWare();


};

#endif

#endif
