#include <iostream>
#include <memory>
#include <vector>

class TestClass
{
public:
	void Msg()
	{
		std::cout << "TestClass()::Msg()" << std::endl;
	}
private:
	int m_data;
};

template <typename _T>
class TestBase
{
public:
	void MsgBase()
	{
		std::cout << "TestBase::MsgBase()" << std::endl;
		_T c;
		c.Msg();
	}
};

template <typename _T>
class TestDerived : public TestBase<_T>
{
public:
	using TestBase<_T>::MsgBase;
	void MsgDerived()
	{
		MsgBase();
		TestBase::MsgBase();
	}
};

int main()
{
	TestDerived<TestClass> c;
	c.MsgDerived();

	return 0;
}