#include <iostream>
#include <memory>

class Base
{
public:
	void wrapper(int data = 0) const
	{
		func1(data);
	}
private:
	virtual void func1(int data) const = 0;
};

class Test : public Base
{
private:
	virtual void func1(int data) const
	{
		std::cout << "func1(data) : " << data << std::endl;
	}
};

int main()
{
	std::tr1::shared_ptr<Base> bp;
	std::tr1::shared_ptr<Test> tp(new Test);

	tp->wrapper(3);
	bp = tp;
	bp->wrapper(3);
	
	return 0;
}