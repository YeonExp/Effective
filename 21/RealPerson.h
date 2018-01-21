#pragma once
#include <iostream>
#include "Person.h"

class RealPerson : public Person
{
public:
	RealPerson(std::string name) : theName(name) {};
	~RealPerson() {};

	std::string name() const
	{
		return theName;
	}
private:
	std::string theName;
};