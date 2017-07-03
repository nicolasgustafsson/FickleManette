#include "stdafx.h"
#include "Game.h"

Game::Game()
{
	static sf::Texture texture;
	texture.loadFromFile("Textures/spark.png");
	mySprite.setTexture(texture);
}


Game::~Game()
{
}

void Game::Update()
{

}

void Game::Draw(Drawer & aDrawer) const
{
	aDrawer.Draw(mySprite);
}
