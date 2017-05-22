#include "LED_diag.h"


void LED_diag::initialize_HardWare()
{
	pinMode(_pinLED, OUTPUT);
	pinMode(_pinBUTTON, INPUT);
	analogWrite(LED_PORT_13, LED_MIN);
	Serial.begin(BAUD_RATE);

}



LED_diag::LED_diag(int pinLED, int pinBUTTON)
{

	_pinLED = pinLED;
	_pinBUTTON = pinBUTTON;
	_STATE = LED_OFF;


}

void LED_diag::LED_STEPS()
{
 
	_Button = digitalRead(_pinBUTTON);

	
#if TEST
	Serial.print("\n Value of Button \t");
	Serial.println(_Button, DEC);
#endif

 	switch (_STATE)
	{


			case  LED_ON :
				if (_Button == LOW)
				{
					_STATE = LED_OFF;
					digitalWrite(LED_PORT_13, LOW);
				}
					
			break;


			case LED_OFF:
				if (_Button == HIGH)
				{
					_STATE = LED_ON;
					digitalWrite(LED_PORT_13, HIGH);
				}	
			break; 
	}

}

void LED_diag::delay_timer(int delay_time)
{
	delay(delay_time);
}
