#include "header/constant_files.h"
#include "header/qt_1_class.h"


qt_1_class                                             LED_Object(LED_PORT_13);
char                                                             led_specifier;
int                                                             led_brightness;
    
void setup() 
{
   LED_Object.Initialize_HardWare();
}

void loop()
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char led_specifier =Serial.read();
    int led_brightness =Serial.parseInt();
     Serial.print("\n Value of Button \t"); 
     Serial.println( led_specifier);
     Serial.println( led_brightness, DEC);
     
    
   LED_Object.writeLeds(led_specifier,led_brightness);
  }

}
