#include <std_base.h>
#include <constant_std.h>


std_base::std_base(int pinLED,int pinBUTTON)
{
   pinMode(pinLED, LED_MIN);
   pinMode(pinBUTTON, LOW);
  _pinLED = pinLED;
  _pinBUTTON = pinBUTTON;
  _STATE=LED_OFF;
  
  
  
}

std_base::LED_STEPS()
{
   uint8_t Button = analogRead(_pinBUTTON);
    
   switch(_STATE)
   {
	   case  LED_OFF:
					   if(Button==PRESSED_VALUE_BUTTON)
					   {
						   _STATE= LED_ON;
						   _timer=TIMER_INITIAL_VALUE;
						   analogWrite(LED_PORT_13,255);
					   }
					   
	   break;
	   
	   
	   case LED_ON :
	   				   if(_timer>=TIMER_TARGET_VALUE)
					   {
						   _STATE= LED_OFF;
						   analogWrite(LED_PORT_13,0);
					   }
					   

	   
	   break;
   }
    
}
std_base::delay_timer(float delay_time)
{
    delay(delay_time);
}

 
