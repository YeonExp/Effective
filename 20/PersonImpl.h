#pragma once
#include "Date.h"

class PersonImpl
{
public:
	PersonImpl(int age, Date birthday);
	void getAge() const;
	void getBirthday() const;
private:
	int _age;
	Date _birthday;
};