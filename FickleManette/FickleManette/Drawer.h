#pragma once
class Drawer : public ConstructOnly
{
public:
	Drawer(sf::RenderWindow & aWindow);
	~Drawer() = default;

	void Draw(const sf::Drawable & aDrawable);

private:
	sf::RenderWindow & myWindow;
};

