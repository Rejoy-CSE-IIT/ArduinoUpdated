 #include <std_base.h>
#include <constant_std.h>

std_base corridor_led(LED_PORT_13,BUTTON_PORT_09);

void setup()
{
  
}

void loop()
{
    corridor_led.LED_STEPS();
    corridor_led.delay_timer(DELAY_VALUE);
 
}


