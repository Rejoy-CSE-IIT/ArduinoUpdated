#ifndef STATEMANAGER_H
#define STATEMANAGER_H


 
#include "Interface.h"
#include "ON_State_LED.h"
#include "OFF_State_LED.h"
#include "DeviceManager.h"

//https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
class StateManager  
{
  
public:
	Interface                                          *_activeState=nullptr;
	ON_State_LED                                *_activeOnLedState = nullptr;
	OFF_State_LED                              *_activeOffLedState = nullptr;

	


	   


	DeviceManager                                             _deviceManager;
	static StateManager *_instanceRef ;
	StateManager();
	void Initialize_StateManager();
	void   StateUpdate();
	void   SwitchState(Interface *);

	void initialize_States();
	void Initialize_CurrentState();


};


#endif

