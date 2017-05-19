 
#include <elapsedMillis.h>
#include "constant_corridor.h"
#include "corridor.h"
 
void corridor::initialize_hardware()
{
	pinMode(_pinLED, OUTPUT);
	pinMode(_pinBUTTON, INPUT);
	analogWrite(LED_PORT_13, LED_MIN);

}



corridor::corridor(int pinLED, int pinBUTTON)
{
	
	_pinLED = pinLED;
	_pinBUTTON = pinBUTTON;
	_STATE = LED_OFF;


	




}

void corridor::LED_STEPS()
{     
	   _Button_test = analogRead(_pinBUTTON);
	 
#if TEST
	   _Button = digitalRead(_pinBUTTON);
#endif


	switch (_STATE)
	{
	case  LED_OFF:
		 
 
		if (_Button == PRESSED_VALUE_BUTTON)
		{
			_STATE = LED_ON;
			_timer = TIMER_INITIAL_VALUE;
			analogWrite(LED_PORT_13, LED_MAX);
		} 
		
		break;


	case LED_ON:
		 

		if (_timer >= TIMER_TARGET_VALUE)
		{
			_STATE = LED_OFF;
			analogWrite(LED_PORT_13, 0);
		}



		break;
	}

}
void corridor::delay_timer(int delay_time)
{
	delay(delay_time);
}
