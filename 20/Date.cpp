#include "Date.h"
#include "DateImpl.h"

Date::Date(int year, int month, int day) : pImpl(new DateImpl(year, month, day)) { }
void Date::getDate() const
{
	pImpl->getDate();
}