 #include <Morse.h>

Morse morse(13),morse_1(15);

void setup()
{
}

void loop()
{

  morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();
  delay(3000);

   morse_1.dot(); morse_1.dot(); morse_1.dot();
  morse_1.dash(); morse_1.dash(); morse_1.dash();
  morse_1.dot(); morse_1.dot(); morse_1.dot();
}

