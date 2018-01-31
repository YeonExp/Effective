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
	NoCopiable(const NoCopiable& nc)
	{
		std::cout << "NoCopiable(const NoCopiable& nc)" << std::endl;
	}
	const NoCopiable& operator=(const NoCopiable& rhs)
	{
		std::cout << "NoCopiable operator()" << std::endl;
		return rhs;
	}
};

class Child
{
public:
	Child()
	{
		std::cout << "Child()" << std::endl;
		NoCopiable nc, nc3;
		NoCopiable nc2(nc);

		nc3 = nc2;
	}
};

int main()
{
	Child *c = new Child();
	
	return 0;
}