#include <iostream>
#include <memory>

class MemoryClass
{
public:
	MemoryClass();
	~MemoryClass();
	void doSomething();
};

MemoryClass::MemoryClass()
{
	std::cout << "MemoryClass()" << std::endl;
}

MemoryClass::~MemoryClass()
{
	std::cout << "~MemoryClass()" << std::endl;
}

void MemoryClass::doSomething()
{
	std::cout << "doSomething()" << std::endl;
}

int main()
{
	std::auto_ptr<MemoryClass> p(new MemoryClass);
	std::auto_ptr<MemoryClass> p2(p);

	p2->doSomething();
	p->doSomething();
	return 0;
}