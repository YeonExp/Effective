#pragma once
#include <iostream>
#include <memory>

class DateImpl;
class Date
{
public:
	Date(int year, int month, int day);
	void getDate() const;
private:
	std::tr1::shared_ptr<DateImpl> pImpl;
};