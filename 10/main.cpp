#include <iostream>
#include <algorithm>

class TimeKeeper
{
public:
	TimeKeeper();
	virtual ~TimeKeeper();
};

class AtomicClock : public TimeKeeper
{
public:
	AtomicClock();
	~AtomicClock();
private:
	int id;
};

TimeKeeper::TimeKeeper()
{
	std::cout << "TimeKeeper() ctor" << std::endl;
}

TimeKeeper::~TimeKeeper()
{
	std::cout << "TimeKeeper() dtor" << std::endl;
}

AtomicClock::AtomicClock()
{
	std::cout << "AtomicClock() ctor" << std::endl;
}

AtomicClock::~AtomicClock()
{
	std::cout << "AtomicClock() dtor" << std::endl;
}

int main()
{
	TimeKeeper *tk = new AtomicClock();
	delete tk;

	return 0;
}