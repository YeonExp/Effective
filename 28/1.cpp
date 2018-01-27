#include <iostream>
#include <memory>

template <typename T, std::size_t n>
class SquareBase
{
public:
	void getAreaSize() const;
};

template <typename T, std::size_t n>
void SquareBase<T, n>::getAreaSize() const
{
	std::cout << "Area : " << n * n << std::endl;
}

int main()
{
	std::tr1::shared_ptr<SquareBase<double, 1>> ptr1(new SquareBase<double, 1>);
	std::tr1::shared_ptr<SquareBase<double, 2>> ptr2(new SquareBase<double, 2>);
	std::tr1::shared_ptr<SquareBase<double, 3>> ptr3(new SquareBase<double, 3>);
	std::tr1::shared_ptr<SquareBase<double, 4>> ptr4(new SquareBase<double, 4>);

	ptr1->getAreaSize();
	ptr2->getAreaSize();
	ptr3->getAreaSize();
	ptr4->getAreaSize();

	return 0;
}