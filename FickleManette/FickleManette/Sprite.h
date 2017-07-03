#pragma once
#include "Drawable.h"
#include <string>

class Sprite final : public IDrawable
{
public:
	Sprite(const std::string & aPath);

	virtual void Draw(Drawer & aDrawer) const override;
private:
	sf::Sprite mySprite;
};

