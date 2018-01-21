#include "Person.h"
#include "PersonImpl.h"

Person::Person(int age, Date birthday) : pImpl(new PersonImpl(age, birthday)) { }
void Person::getAge() const
{
	pImpl->getAge();
}
void Person::getBirthday() const
{
	pImpl->getBirthday();
}