#include <iostream>
#include <memory>

class BaseClass { };
class DerivedClass : public BaseClass { };

int main()
{
	BaseClass *bc = NULL;
	DerivedClass *dc = new DerivedClass();

	bc = dc;

	BaseClass *bc2 = NULL;
	DerivedClass dc2;

	bc2 = &dc2;

	DerivedClass dc3;
	BaseClass &bc3 = dc3;

	return 0;
}