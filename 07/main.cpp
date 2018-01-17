#include <iostream>
#include <algorithm>
#include <vector>

class OperatorBase
{
public:
	OperatorBase();
	OperatorBase(const OperatorBase& ob);
	OperatorBase& operator=(const OperatorBase& ob);
	void ShowData() const;
	void ChangeData(int _data);
private:
	int data;
};

void OperatorBase::ChangeData(int _data)
{
	data = _data;
}

void OperatorBase::ShowData() const
{
	std::cout << "Data = " << data << std::endl;
}

OperatorBase::OperatorBase()
{
	std::cout << "기본 생성자 호출!" << std::endl;
	data = 0;
}

OperatorBase::OperatorBase(const OperatorBase& ob)
{
	std::cout << "복사 생성자 호출!" << std::endl;
	data = ob.data;
}

OperatorBase &OperatorBase::operator=(const OperatorBase& ob)
{
	std::cout << "복사 대입 연산자 호출!" << std::endl;
	OperatorBase ob3(ob);
	return ob3;
}

int main()
{
	OperatorBase ob1;
	ob1.ShowData();

	OperatorBase ob2(ob1);
	ob2.ShowData();

	ob2.ChangeData(10);
	ob2.ShowData();

	ob1 = ob2;
	ob1.ShowData();

	return 0;
}