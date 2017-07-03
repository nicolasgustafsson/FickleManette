#pragma once
#include <string>
#include "Singleton.h"
enum EConsoleColor
{
	Black,
	DarkBlue,
	DarkGreen,
	DarkAqua,
	DarkRed,
	DarkPurple,
	DarkYellow,
	White,
	Gray,
	Blue,
	Green,
	Aqua,
	Red,
	Purple,
	Yellow,
	BrightWhite
};


class Console : public Singleton<Console>
{
public:
	static void Print(const std::string & aText, const EConsoleColor aTextColor = EConsoleColor::White, const EConsoleColor aBackgroundColor = EConsoleColor::Black);

private:
	int GetConsoleColorFromEnum(const EConsoleColor aColor) const;
	void SetConsoleColor(const EConsoleColor aTextColor = EConsoleColor::White, const EConsoleColor aBackgroundColor = EConsoleColor::Black) ;

	EConsoleColor myLastTextColor;
	EConsoleColor myLastBackgroundColor;
};