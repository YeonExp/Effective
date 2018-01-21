#pragma once
#include <iostream>
#include <memory>

class Person
{
public:
	virtual ~Person() {};
	virtual std::string name() const = 0;

	static Person* create(std::string name);
};