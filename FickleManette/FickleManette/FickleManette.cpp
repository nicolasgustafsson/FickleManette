// FickleManette.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "WindowLoop.h"
#include "Singleton.h"

int main()
{
	WindowLoop windowLoop;

	windowLoop.StartLoop();

    return 0;
}

