 //http://www.forward.com.au/pfod/ArduinoProgramming/TimingDelaysInArduino.html

#include "header/constant.h"
#include <elapsedMillis.h>
elapsedMillis                                        timer0,timer1;
float                                        time_LED_Counter=0.0f;

 
bool                                                 high_LED=true;
int                                                   Interval_LED;

bool                                                 high_SOUND=true;
int                                                   Interval_SOUND;


int                                                 interval_LDR=0;


void setup()
{
    Serial.begin(9600);

    
    timer0 = 0; // clear the timer at the end of startup

    pinMode(LED_PORT_13  , OUTPUT); // enable output on the led pin
    pinMode(SOUND_PORT_09, OUTPUT); // enable output on the led pin

    interval_LDR = analogRead(SENSOR_PIN);

    
    Interval_LED = _normalized_interval_for_LED(interval_LDR);
    Interval_SOUND = _normalized_interval_for_Sound(interval_LDR);


    
}
void loop()
{


     
 
     
    interval_LDR = analogRead(SENSOR_PIN);
       
       
    if (timer0 > Interval_LED) 
    {

         Serial.println(timer0, DEC);  // print as an ASCII-encoded decimal
        timer0 = 0; //reset the timer
        // dark short time interval
        Interval_LED = _normalized_interval_for_LED(interval_LDR);
        if(high_LED)
        {
           digitalWrite(LED_PORT_13, HIGH); // set the LED on
           high_LED=false;
        }
        else
        {
           digitalWrite(LED_PORT_13, LOW); // set the LED on
           high_LED=true;
        }
       
    }


    if (timer1 > Interval_SOUND) 
    {

        Serial.println(timer1, DEC);  // print as an ASCII-encoded decimal
        timer1 = 0; //reset the timer
        // dark short time interval
        Interval_SOUND = _normalized_interval_for_Sound(interval_LDR);
        if(high_SOUND)
        {
           digitalWrite(SOUND_PORT_09, HIGH); // set the LED on
           high_SOUND=false;
        }
        else
        {
           digitalWrite(SOUND_PORT_09, LOW); // set the LED on
           high_SOUND=true;
        }
       
    }


    
    

    
    
    // Serial.println(timer1, DEC);  // print as an ASCII-encoded decimal
    
}

int _normalized_interval_for_LED(int interval)
{
       

        int interval_LED_D =  map(interval, MIN_DURATION_LDR,MAX_DURATION_LDR, MIN_DURATION_LED,MAX_DURATION_LED); // convert to blink rate
        interval_LED_D = constrain(interval_LED_D, MIN_DURATION_LED,MAX_DURATION_LED); // constrain the value

        return interval_LED_D;
}

int _normalized_interval_for_Sound(int interval)
{
       

        int interval_Sound_D =  map(interval, MIN_DURATION_LDR,MAX_DURATION_LDR, MIN_DURATION_SOUND,MAX_DURATION_SOUND); // convert to blink rate
        interval_Sound_D = constrain(interval_Sound_D, MIN_DURATION_SOUND,MAX_DURATION_SOUND); // constrain the value

        return interval_Sound_D;
}






