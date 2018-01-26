#include <iostream>
#include <memory>
#include <vector>

template <typename T>
class TestClass
{
public:
	void printType() const
	{
		std::cout << "This Type : " << sizeof(newType) << std::endl;
	}
private:
	T newType;
public:
	typename T::iterator iter;
};

int main()
{
	TestClass<std::vector<int>> Test;
	Test.printType();

	return 0;
}