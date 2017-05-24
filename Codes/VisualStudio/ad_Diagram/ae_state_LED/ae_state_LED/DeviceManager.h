#ifndef DEVICEMANAGER_H
#define DEVICEMANAGER_H


#include"constant_LED.h"

#include "Interface.h"
//https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
class DeviceManager  
{
	
public:

	void initialize_HardWare();
	void assign_ports();
	void initilize_port_data();

#if TEST
	void assign_baud_rate();
#endif
};



#endif
