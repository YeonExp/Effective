#include "Person.h"

int main()
{
	Person* pp = Person::create("Hello");
	std::cout << pp->name().c_str() << std::endl;

	return 0;
}