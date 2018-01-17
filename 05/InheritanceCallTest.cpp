#include <iostream>

class Base
{
public:
	Base();
	~Base();
};

Base::Base()
{
	std::cout << "Base::Base() 호출!\n";
}

Base::~Base()
{
	std::cout << "Base::~Base() 호출!\n";
}

class Derived : public Base
{
public:
	Derived();
	~Derived();
};

Derived::Derived()
{
	std::cout << "Derived::Derived() 호출!\n";
}

Derived::~Derived()
{
	std::cout << "Derived::~Derived() 호출!\n";
}

int main()
{
	Derived d;

	return 0;
}