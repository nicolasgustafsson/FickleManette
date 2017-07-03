#include "stdafx.h"
#include "WindowLoop.h"


WindowLoop::WindowLoop()
{
}


WindowLoop::~WindowLoop()
{
}

void WindowLoop::StartLoop()
{
	sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(1920.f, 1080.f));

	sf::RenderWindow window(sf::VideoMode(1280, 720), "Fickle Manette");

	window.setView(view);
	Drawer drawer(window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(101, 156, 239));

		myGame.Update();
		myGame.Draw(drawer);

		window.display();
	}

}
