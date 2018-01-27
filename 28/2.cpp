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
	void getAreaSize(std::size_t n) const				// �Ű������� std::size_t�̱� ������ 
														// ���ø� Ÿ�Կ� �������� �ʰ� ������
	{
		std::cout << "Area : " << n * n << std::endl;
	}
};

template <typename T, std::size_t n>
class SquarePatch : public SquareBasePatch<T>			// ����� �ϸ鼭 SquareBasePatch�� Ÿ���� �Ѱܼ� ����
{
public:
	using SquareBasePatch<T>::getAreaSize;				// ������ ����µ�, ���ø� ����� ���� ��� 3���� �� �Ѱ���
	void getAreaSize() const
	{
		this->getAreaSize(n);							// getAreaSize�� �θ� ���ø��� �ִ� �Լ��� �Ű������� �Ѱܼ� ȣ��
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