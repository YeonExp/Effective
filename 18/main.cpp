#include <iostream>
#include <memory>

template <typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void swap<double>(double& a, double& b)
{
	int i, j;
	i = (int)a;
	j = (int)b;
	a = a - i + j;
	b = b - j + 1;
}

int main()
{
	double a = 10.5, b = 20.4;
	swap(a, b);
	std::cout << a << ", " << b << std::endl;
	return 0;
}