#include <iostream>
#include <memory>
#include <algorithm>

template<typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 20;
	float a2 = 20.0, b2 = 30.0;
	char a3 = 'a', b3 = 'b';

	Swap(a, b);
	Swap(a2, b2);
	Swap(a3, b3);

	std::cout << a << ", " << b << std::endl;
	std::cout << a2 << ", " << b2 << std::endl;
	std::cout << a3 << ", " << b3 << std::endl;

	return 0;
}