#include "StateManager.h"
#include "constant_LED.h"


void StateManager::Initialize_StateManager()
{
	_deviceManager.initialize_HardWare();
	initialize_States();

}

void StateManager::StateUpdate()
{
	if (_activeState != NULL)
		_activeState->StateUpdate();
}

StateManager::StateManager()
{
	StateManager::_instanceRef = this;


}

void StateManager::SwitchState(Interface *newState)
{
	newState->Initialize_CurrentState();
	_activeState = newState;

}



void StateManager::initialize_States()
{
	if (_activeOnLedState == nullptr && _activeOffLedState == nullptr)
	{
		_activeOnLedState = new ON_State_LED();
		_activeOffLedState = new OFF_State_LED();

	}

	Initialize_CurrentState();

}

void StateManager::Initialize_CurrentState()
{

	_activeOffLedState->Initialize_CurrentState();
	_activeState = _activeOffLedState;



}

StateManager* StateManager::_instanceRef = nullptr;



