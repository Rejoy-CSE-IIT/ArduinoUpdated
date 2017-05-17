

#ifndef QT_1_CLASS
#define QT_1_CLASS

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

class qt_1_class
{
	
	
	
	private:
	           int _led_port;
			  
	public:
              qt_1_class(int);	
			  void  writeLeds(char  ,int  );
			   void  Initialize_HardWare();
 
	
};

#endif

#endif