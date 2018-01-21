#include "RealPerson.h"

Person* Person::create(std::string name)
{
	return (new RealPerson(name));
}