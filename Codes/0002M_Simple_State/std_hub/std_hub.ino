#include <std_base.h>
#include <constant_std.h>

std_base corridor_led(LED_PORT_13,BUTTON_PORT_09);

void setup()
{
      Serial.begin(BAUD_RATE);
     // corridor_led.initialize(LED_PORT_13,BUTTON_PORT_09);
}

void loop()
{
   //  Serial.println(corridor_led._timer, DEC);
   //  Serial.print("\n Value of LED \t"); 
    // Serial.println( corridor_led._STATE, DEC);
    Serial.print("\n Value of Button \t"); 
    Serial.println( corridor_led._Button, DEC);
    // Serial.println("------------------------------");
    corridor_led.LED_STEPS();
    corridor_led.delay_timer(DELAY_VALUE);
 
}


