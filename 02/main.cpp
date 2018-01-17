#include <iostream>
#include <algorithm>

class Test
{
public:
	const int maxCount;
	int& ref;
	int sample;

	Test();
};

Test::Test() : maxCount(100), ref(sample) {
	sample = 200;
}

class AccessControl
{
public:
	char publicData;
	void publicFunc() {}
protected:
	int protectedData;
	void protectedFunc() {}
private:
	float privateData;
	void privateFunc() {}
};

int main()
{
	Test *ts = new Test();
	AccessControl ac;

	ac.publicData = 'A';
	ac.publicFunc();
	return 0;
}