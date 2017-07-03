#pragma once
#include "..\Extlibs\Include\SFML\Graphics\Drawable.hpp"

class IDrawable
{
public:
	IDrawable() = default;
	virtual ~IDrawable() = default;

	virtual void Draw( Drawer & aDrawer) const = 0;
private:
};

