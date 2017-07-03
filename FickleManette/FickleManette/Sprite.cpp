#include "stdafx.h"
#include "Sprite.h"

void Sprite::Draw(Drawer & aDrawer) const
{
	aDrawer.Draw(mySprite);
}

Sprite::Sprite(const std::string & aPath)
{
	myTexture.loadFromFile(aPath);
	mySprite.setTexture(myTexture);
}
