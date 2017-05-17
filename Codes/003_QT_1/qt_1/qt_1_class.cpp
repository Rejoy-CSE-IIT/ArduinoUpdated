#include "header/constant_files.h"
#include "header/qt_1_class.h"


void qt_1_class::Initialize_HardWare()
{
	
     pinMode(_led_port  ,OUTPUT);
	 
	 
	 
	 analogWrite(_led_port,LED_MAX); 
	 
	  
     Serial.begin(BAUD_RATE);
   
}
 


qt_1_class::qt_1_class(int led_port)
{
	
	 _led_port    =          led_port;
	 
	 
 

}

void qt_1_class::writeLeds(char led,int brightness)
{
	
 // This is for test
   if(led=='r') 
   {
	    analogWrite(_led_port,LED_MAX-brightness); 
   }
   
   
   return; 
}
 
 
