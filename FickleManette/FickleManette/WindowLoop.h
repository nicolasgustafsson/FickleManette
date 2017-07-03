#pragma once
#include "Game.h"
#include "Drawer.h"

//Handles window
class WindowLoop : public ConstructOnly
{
public:
	WindowLoop();
	~WindowLoop();
	void StartLoop();

private:
	Game myGame;
};

