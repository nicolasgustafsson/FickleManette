#pragma once

/*
Creates a singleton of type T when it is inherited from T.
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

	static_assert(std::is_base_of<Singleton, T>::value, "T is not inherited from singleton!");

	//print function to show which class the error occurs in
	static_assert(std::is_base_of<Singleton, T>::value, __FUNCTION__);

	if (myInstance == nullptr)
	{
		myInstance = new T();
	}
	return myInstance;
}

template <typename T>
T * Singleton<T>::myInstance = nullptr;

