#pragma once
#include <iostream>
#include <memory>

class PersonImpl;
class Date;
class Person
{
public:
	Person(int age, Date birthday);
	void getAge() const;
	void getBirthday() const;
private:
	std::tr1::shared_ptr<PersonImpl> pImpl;
};