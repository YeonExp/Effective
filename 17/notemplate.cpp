#include <iostream>
#include <memory>
#include <algorithm>

void IntSwap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void FloatSwap(float& a, float& b)
{
	float temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 20;
	
	IntSwap(a, b);
	std::cout << a << ", " << b << std::endl;

	float a2 = 10.0, b2 = 20.0;
	FloatSwap(a2, b2);
	std::cout << a2 << ", " << b2 << std::endl;

	return 0;
}