#include "DeviceManager.h"
#include"constant_LED.h"


void DeviceManager::initialize_HardWare()
{
	assign_ports();
	initilize_port_data();

#if TEST
	assign_baud_rate();
#endif
}

void DeviceManager::assign_ports()
{
	pinMode(LED_PORT_13, OUTPUT);
	pinMode(BUTTON_PORT_09, INPUT);

}

void DeviceManager::initilize_port_data()
{

	//analogWrite(LED_PORT_13, LED_MIN);

}

#if TEST
void DeviceManager::assign_baud_rate()
{

	Serial.begin(BAUD_RATE);
}
#endif
