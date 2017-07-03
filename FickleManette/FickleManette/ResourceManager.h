#pragma once
#include <unordered_map>
#include "Singleton.h"
#include "Console.h"

//super basic resource manager to prevent duplication of resources
template<typename T>
class ResourceManager : public Singleton<ResourceManager<T>>
{
public:
	T & CreateResource(const std::string & aPath);
	T & GetResource(const std::string & aPath);

private:

	std::unordered_map<std::string, T> myResourceMap;
};

template<typename T>
T & ResourceManager<T>::CreateResource(const std::string & aPath)
{
	sf::Clock clock;
	myResourceMap[aPath] = T(aPath);
	float time = clock.getElapsedTime().asSeconds();

	Console::Print(std::string("[RESOURCE] Resource of type ") + typeid(T).name() + " created! Time taken: " + std::to_string(time) + " seconds.", EConsoleColor::Aqua);

	return myResourceMap[aPath];
}

template<typename T>
T & ResourceManager<T>::GetResource(const std::string & aPath)
{
	auto && resourceIterator = myResourceMap.find(aPath);
	if (resourceIterator == myResourceMap.cend())
	{
		return CreateResource(aPath);
	}
	return resourceIterator->second;
}

