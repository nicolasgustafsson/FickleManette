#pragma once
#include "resource.h"
#include "..\Extlibs\Include\SFML\Graphics\Texture.hpp"

//extension to allow texture creation with string
class Texture : public IResource
{
public:
	Texture() = default;
	Texture(const std::string & aPath);
	operator sf::Texture& ();

	sf::Texture myTexture;
};

Texture::operator sf::Texture&()
{
	return myTexture;
}

Texture::Texture(const std::string & aPath)
{
	myTexture.loadFromFile(aPath);
}
