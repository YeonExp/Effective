#include <iostream>
#include <memory>
#include <vector>

template <class T>
class TestClass
{
public:
	void printType() const
	{
		std::cout << "This Type : " << sizeof(newType) << std::endl;
	}
private:
	T newType;
};

int main()
{
	TestClass<std::vector<int>> Test;
	Test.printType();

	return 0;
}