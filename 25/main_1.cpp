#include <iostream>
#include <memory>

class A {
public:
	void print()
	{
		std::cout << "A::print()" << std::endl;
	}
};

class B : public A { };
class C : public A { };
class D : public B, public C { };

int main()
{
	D dp;
	dp.print();

	return 0;
}