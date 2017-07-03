#include "stdafx.h"
#include "Game.h"

Game::Game()
	:mySprite("Textures/spark.png")
{

}


Game::~Game()
{
}

void Game::Update()
{

}

void Game::Draw(Drawer & aDrawer) const
{
	mySprite.Draw(aDrawer);
}
