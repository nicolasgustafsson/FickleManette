#pragma once

class Noncopyable
{
public:
	Noncopyable() = default;
	virtual ~Noncopyable() = default;

	Noncopyable & operator=(const Noncopyable & aOther) = delete;
	Noncopyable(const Noncopyable & aOther) = delete;
};

class Nonmoveable
{
public:
	Nonmoveable() = default;
	virtual ~Nonmoveable() = default;

	Nonmoveable && operator=(const Nonmoveable && aOther) = delete;
	Nonmoveable(const Nonmoveable && aOther) = delete;
};

//cant copy nor move - should probably change this to a not stupid name
class ConstructOnly : public Nonmoveable, public Noncopyable
{
public:
	ConstructOnly() = default;
	virtual ~ConstructOnly() = default;
};