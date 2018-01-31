#include <iostream>
#include <memory>

class Base
{
public:
	Base() : _data(10) { }
	void printData()
	{
		std::cout << _data << std::endl;
	}
private:
	int _data;
};

class Derived : public Base
{
public:
	Derived() : _data(20) { }
	void printData()
	{
		std::cout << _data << std::endl;
	}
private:
	int _data;
};

int main()
{
	Base *dp = new Derived();
	dp->printData();

	return 0;
}