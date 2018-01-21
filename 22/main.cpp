#include <iostream>

class Base
{
public:
	virtual void mf1() = 0;
	virtual void mf1(int a)
	{
		std::cout << "Base::mf1(int a)" << std::endl;
	}
};

class Derived : public Base
{
public:
	using Base::mf1;
	virtual void mf1()
	{
		std::cout << "Derived::mf1()" << std::endl;
	}
};

int main()
{
	Derived d;
	d.mf1();
	d.mf1(1);
}