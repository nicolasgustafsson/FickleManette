#include "stdafx.h"
#include "Console.h"
#include <iostream>
#include <windows.h>

void Console::Print(const std::string & aText, const EConsoleColor aTextColor, const EConsoleColor aBackgroundColor)
{
	//ensure console is created
	GetInstance();

	if (myInstance->myLastTextColor != aTextColor || myInstance->myLastBackgroundColor != aBackgroundColor)
	{
		myInstance->SetConsoleColor(aTextColor, aBackgroundColor);
	}

	std::cout << aText << std::endl;
}

void Console::SetConsoleColor(const EConsoleColor aTextColor, const EConsoleColor aBackgroundColor) 
{
	myInstance->myLastTextColor = aTextColor;
	myInstance->myLastBackgroundColor = aBackgroundColor;
	int color = GetConsoleColorFromEnum(aTextColor) + (GetConsoleColorFromEnum(aBackgroundColor) * 16);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int Console::GetConsoleColorFromEnum(const EConsoleColor aColor) const
{
	return static_cast<int>(aColor);
}

