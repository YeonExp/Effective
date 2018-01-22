#include <iostream>
#include <memory>

class Base
{
public:
	virtual void func1(int data = 0) const = 0;
};

class Test : public Base
{
public:
	virtual void func1(int data = 1) const
	{
		std::cout << "Test::func1(data = 1) : " << data << std::endl;
	}
};

int main()
{
	std::tr1::shared_ptr<Base> bp;
	std::tr1::shared_ptr<Test> tp(new Test);

	tp->func1();
	bp = tp;
	bp->func1();
	return 0;
}