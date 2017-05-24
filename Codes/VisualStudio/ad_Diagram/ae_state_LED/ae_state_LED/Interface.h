//https://stackoverflow.com/questions/9756893/how-to-implement-interfaces-in-c

#ifndef INTERFACE_H
#define INTERFACE_H

class Interface
{
public:

 
	virtual void StateUpdate()=0;
	virtual void Initialize_CurrentState()=0;
	 
};

 


#endif