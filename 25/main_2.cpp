#include <iostream>
#include <memory>

class A {
public:
	void print()
	{
		std::cout << "A::print()" << std::endl;
	}
};

class B : virtual public A { };
class C : virtual public A { };
class D : virtual public B, virtual public C { };

int main()
{
	D dp;
	dp.print();

	return 0;
}