#pragma once
#include <unordered_map>
#include "Singleton.h"

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
	T resource = T(aPath);
	myResourceMap[aPath] = resource;
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

