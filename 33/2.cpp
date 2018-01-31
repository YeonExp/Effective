#include <iostream>
#include <memory>

class NoCopiable
{
	friend class Child;
public:
	NoCopiable()
	{
		std::cout << "NoCopiable()" << std::endl;
	}
private:
	NoCopiable(const NoCopiable& nc);
	const NoCopiable& operator=(const NoCopiable& rhs);
};

class Child
{
public:
	Child()
	{
		std::cout << "Child()" << std::endl;
		NoCopiable nc;
	}
};

int main()
{
	Child *c = new Child();
	
	return 0;
}