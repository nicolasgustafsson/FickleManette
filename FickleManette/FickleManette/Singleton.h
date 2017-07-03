#pragma once

/*
Curiously Recurring Template Pattern(CRTP) to create instance of inherited class within base
*/
template <typename T>
class Singleton : public ConstructOnly
{
public:
	static T* GetInstance();
protected:
	Singleton() = default;
	virtual ~Singleton() = default;

	static T * myInstance;
};

template <typename T>
T* Singleton<T>::GetInstance()
{
	if (myInstance == nullptr)
	{
		myInstance = new T();
	}
	return myInstance;
}

template <typename T>
T * Singleton<T>::myInstance = nullptr;

