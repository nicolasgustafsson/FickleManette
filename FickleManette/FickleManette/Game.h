#pragma once
#include "Drawable.h"

class Game : public IDrawable
{
public:
	Game();
	~Game();

	void Update();
	virtual void Draw(Drawer & aDrawer) const override;

private:
	sf::Sprite mySprite;
};

