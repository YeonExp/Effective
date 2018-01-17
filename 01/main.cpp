#include <iostream>
#include <algorithm>

class Calculator
{
public:
	Calculator();
	int MidValue(int, int, int, int, int);
	int MidValueArray(char[], int);
private:
	int result;
};

int compare(const void *, const void *);

Calculator::Calculator()
{
	result = 0;
}

int Calculator::MidValue(int a, int b, int c, int d, int e)
{
	int data[5] = { a, b, c, d, e };

	std::qsort(data, 5, sizeof(int), compare);
	return data[2];
}

int compare(const void* a, const void* b)
{
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}
int main()
{
	Calculator *cal = new Calculator();

	std::cout << cal->MidValue(3, 1, 2, 10, 8) << std::endl;
	return 0;
}