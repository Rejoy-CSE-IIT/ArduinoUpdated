#include <std_base.h>
#include <constant_std.h>


std_base::std_base(int pinLED,int pinBUTTON)
{
   pinMode(pinLED, OUTPUT);
   pinMode(pinBUTTON, INPUT);
   
  _pinLED                      = pinLED;
  _pinBUTTON                   = pinBUTTON;
  _STATE                       = LED_OFF;
  
  
   analogWrite(LED_PORT_13,LED_MIN);

  
  
  
}

std_base::LED_STEPS()
{
   //  _Button = analogRead(_pinBUTTON);
   _Button = digitalRead(_pinBUTTON);

   switch(_STATE)
   {
	   case  LED_OFF:
	 
					   if(_Button==PRESSED_VALUE_BUTTON)
					   {
						   _STATE= LED_ON;
						   _timer=TIMER_INITIAL_VALUE;
						   analogWrite(LED_PORT_13,LED_MAX);
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
std_base::delay_timer(int delay_time)
{
    delay(delay_time);
}

 
