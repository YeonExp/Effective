#include <iostream>

class Base
{
public:
	Base();
	~Base();
};

Base::Base()
{
	std::cout << "Base::Base() ȣ��!\n";
}

Base::~Base()
{
	std::cout << "Base::~Base() ȣ��!\n";
}

class Derived : public Base
{
public:
	Derived();
	~Derived();
};

Derived::Derived()
{
	std::cout << "Derived::Derived() ȣ��!\n";
}

Derived::~Derived()
{
	std::cout << "Derived::~Derived() ȣ��!\n";
}

int main()
{
	Derived d;

	return 0;
}