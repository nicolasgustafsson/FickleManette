#include "stdafx.h"
#include "Drawer.h"



Drawer::Drawer(sf::RenderWindow & aWindow) : myWindow(aWindow)
{

}

void Drawer::Draw(const sf::Drawable & aDrawable)
{
	myWindow.draw(aDrawable);
}
