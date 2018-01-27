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

template <typename T>
class SquareBasePatch
{
public:
	void getAreaSize(std::size_t n) const				// 매개변수가 std::size_t이기 때문에 
														// 템플릿 타입에 의존하지 않고 생성됨
	{
		std::cout << "Area : " << n * n << std::endl;
	}
};

template <typename T, std::size_t n>
class SquarePatch : public SquareBasePatch<T>			// 상속을 하면서 SquareBasePatch에 타입을 넘겨서 지정
{
public:
	using SquareBasePatch<T>::getAreaSize;				// 이전에 배웠는데, 템플릿 상속을 위한 방법 3가지 중 한가지
	void getAreaSize() const
	{
		this->getAreaSize(n);							// getAreaSize를 부모 템플릿에 있는 함수에 매개변수로 넘겨서 호출
	}
};

int main()
{
	std::tr1::shared_ptr<SquarePatch<double, 1>> ptr1(new SquarePatch<double, 1>);
	std::tr1::shared_ptr<SquarePatch<double, 2>> ptr2(new SquarePatch<double, 2>);

	ptr1->getAreaSize();
	ptr2->getAreaSize();

	return 0;
}