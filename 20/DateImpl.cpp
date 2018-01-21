#include "DateImpl.h"

DateImpl::DateImpl(int year, int month, int day) : years(year), months(month), days(day) { }
void DateImpl::getDate() const
{
	std::cout << "Years : " << years << ", Month : " << months << ", Days : " << days << std::endl;
}