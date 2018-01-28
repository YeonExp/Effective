#include <iostream>
#include <memory>

template<typename T>
class TestClass
{
public:
	void Print();
};

template<typename T>
void TestClass<T>::Print()
{
	if (typeid(T) == typeid(int))
	{
		std::cout << "This is Int Type" << std::endl;
	}
	else if (typeid(T) == typeid(double))
	{
		std::cout << "This is double Type" << std::endl;
	}
}

int main()
{
	std::tr1::shared_ptr<TestClass<int>> ts1(new TestClass<int>());
	std::tr1::shared_ptr<TestClass<double>> ts2(new TestClass<double>());

	ts1->Print();
	ts2->Print();

	return 0;
}