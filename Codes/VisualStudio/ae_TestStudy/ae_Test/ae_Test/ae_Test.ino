#include "constant_LED.h"
#include "LED_diag.h"
//LED_diag first(10,5), second(10,5);

//LED_diag *first, *second;

#if TEST_NORMAL
LED_diag first , second ;
LED_diag first_p(100, 50), second_p(200, 150);
#endif 

// the setup function runs once when you press reset or power the board
void setup() 
{
	Serial.begin(BAUD_RATE);

#if TEST_NORMAL

#if ! TEST_STATIC_NORMAL
	first.setValue(1000);
	second.setValue(500);
	first.test_val_pub_I++;
	
#else
 
	 first.static_Increment(10);
 
	second.static_Increment(20);

#endif

#endif


}

// the loop function runs over and over again until power down or reset
void loop()
{
#if TEST_NORMAL

#if ! TEST_STATIC_NORMAL
	Serial.println("With out Parameter Constructor::");
	Serial.println(first.getValue());
	Serial.println(second.getValue());
	Serial.println(first.test_val_pub_I);
	Serial.println(second.test_val_pub_I);

	Serial.println(first_p.getValue());
	Serial.println(second_p.getValue());
	Serial.println(first_p.test_val_pub_I);
	Serial.println(second_p.test_val_pub_I);
#endif

#endif
	Serial.println(LED_diag::testS);
}
