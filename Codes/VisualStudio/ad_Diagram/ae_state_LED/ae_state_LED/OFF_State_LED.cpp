#include "OFF_State_LED.h"

#include "StateManager.h"
void OFF_State_LED::StateUpdate()
{

	 
	int _Button = digitalRead(BUTTON_PORT_09);
 


#if TEST
	Serial.print("\n Value of Button (OFF STATE)\t");
	Serial.print(_Button, DEC);

	int _LED_Val = digitalRead(LED_PORT_13);
	Serial.print("\n Value of LED (OFF STATE)\t");
	Serial.println(_LED_Val, DEC);
#endif

	if (_Button == HIGH)
	{
		 
		StateManager::_instanceRef->SwitchState(StateManager::_instanceRef->_activeOnLedState);
		
	}
	 




}

void OFF_State_LED::Initialize_CurrentState()
{
	 


	digitalWrite(LED_PORT_13, LOW);


}