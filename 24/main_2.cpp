#include <iostream>
#include <memory>

class Base
{
public:
	void trigger() const
	{
		printFunc();
	}
private:
	virtual void printFunc() const = 0;
};

class Child : public Base
{
private:
	virtual void printFunc() const
	{
		std::cout << "Child::printFunc()" << std::endl;
	}
};

class Cousin : public Base
{
private:
	virtual void printFunc() const
	{
		std::cout << "Cousin::printFunc()" << std::endl;
	}
};

int main()
{
	std::tr1::shared_ptr<Child> cPtr(new Child);
	std::tr1::shared_ptr<Cousin> nPtr(new Cousin);
	cPtr->trigger();
	nPtr->trigger();

	return 0;
}