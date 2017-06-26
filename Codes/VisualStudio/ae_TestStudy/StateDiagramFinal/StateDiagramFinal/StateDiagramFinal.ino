#include"StateManager.h"
StateManager  stateManager;

// the setup function runs once when you press reset or power the board
void setup() {
	stateManager.Initialize_StateManager();
}

// the loop function runs over and over again until power down or reset
void loop() {
	stateManager.StateUpdate();
}
