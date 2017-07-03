#include "stdafx.h"
#include "Sprite.h"
#include "ResourceManager.h"
#include "Texture.h"

void Sprite::Draw(Drawer & aDrawer) const
{
	aDrawer.Draw(mySprite);
}

Sprite::Sprite(const std::string & aPath)
{
	mySprite.setTexture(ResourceManager<Texture>::GetInstance()->GetResource(aPath));
	mySprite.setOrigin(sf::Vector2f(mySprite.getTexture()->getSize()) / 2.f);
}
