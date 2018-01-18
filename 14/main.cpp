#include <iostream>
#include <memory>

class TestClass
{
public:
	TestClass();
	TestClass(const TestClass& tc);
	~TestClass();
	std::string name;
	int idx;
};
void ShowData(TestClass *);
TestClass::TestClass()
{
	name = std::string("HelloWorld");
	idx = 10;
}
TestClass::~TestClass() {}
TestClass::TestClass(const TestClass& tc) : name(tc.name), idx(tc.idx)
{
}

void ShowData(TestClass *tc)
{
	std::cout << tc->name.c_str() << std::endl;
	std::cout << tc->idx << std::endl;
}
int main()
{
	std::tr1::shared_ptr<TestClass> tc(new TestClass);

	ShowData(tc.get());
	return 0;
}