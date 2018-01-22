#include <iostream>

class Parent {
public:
	void function()
	{
		std::cout << "Parent::function()" << std::endl;
	}
};

class Child : public Parent
{
public:
	void function()
	{
		std::cout << "Child::function()" << std::endl;
	}
};

int main()
{
	Child c;

	Parent *pP = &c;
	pP->function();

	return 0;
}