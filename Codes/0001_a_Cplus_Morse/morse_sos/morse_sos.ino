#include "header/constant.h"

 

void setup()
{
  pinMode(LED_PORT_13, OUTPUT);
}

void loop()
{
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();
  delay(DELAY_BETWEEN_MESSAGE);
}

void dot()
{
  digitalWrite(LED_PORT_13, HIGH);
  delay(DELAY_BETWEEN_DOT_DOT);
  digitalWrite(LED_PORT_13, LOW);
  delay(DELAY_BETWEEN_DOT_END);
}

void dash()
{
  digitalWrite(LED_PORT_13, HIGH);
  delay(DELAY_BETWEEN_DASH_DASH);
  digitalWrite(LED_PORT_13, LOW);
  delay(DELAY_BETWEEN_DASH_END);
}
