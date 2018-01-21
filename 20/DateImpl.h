#pragma once
#include <iostream>

class DateImpl
{
public:
	DateImpl(int year, int month, int day);
	void getDate() const;
private:
	int years;
	int months;
	int days;
};