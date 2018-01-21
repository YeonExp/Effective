#include "PersonImpl.h"

PersonImpl::PersonImpl(int age, Date birthday) : _age(age), _birthday(birthday) { }
void PersonImpl::getAge() const
{
	std::cout << "Age : " << _age << std::endl;
}

void PersonImpl::getBirthday() const
{
	_birthday.getDate();
}