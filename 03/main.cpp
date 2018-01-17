#include <iostream>
#include <algorithm>

class WhoAmI
{
public:
	int id;

	WhoAmI(int id_arg);
	void ShowYourSelf() const;
};

WhoAmI::WhoAmI(int id_arg)
{
	id = id_arg;
}

void WhoAmI::ShowYourSelf() const
{
	std::cout << "(ID = " << id << ", this = " << this << ")\n";
}

int main()
{
	WhoAmI obj1(1), obj2(2), obj3(3);

	obj1.ShowYourSelf();
	obj2.ShowYourSelf();
	obj3.ShowYourSelf();

	std::cout << "&obj1 = " << &obj1 << "\n";
	std::cout << "&obj2 = " << &obj2 << "\n";
	std::cout << "&obj3 = " << &obj3 << "\n";

	return 0;
}