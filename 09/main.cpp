#include <iostream>
#include <algorithm>

/* Assignment Example */
class ABEntry
{
public:
	ABEntry(const std::string& name, const std::string& address,
		const std::string& phone);
private:
	std::string theName;
	std::string theAddress;
	std::string thePhone;
	int numTimesConsulted;
};

ABEntry::ABEntry(const std::string& name, const std::string& address,
	const std::string& phone)
{
	theName = name;
	theAddress = address;
	thePhone = phone;
	numTimesConsulted = 0;
}


/* Initialization Example */
class ABEntry2
{
public:
	ABEntry2(const std::string& name, const std::string& address,
		const std::string& phone);
private:
	std::string theName;
	std::string theAddress;
	std::string thePhone;
	int numTimesConsulted;
};

ABEntry2::ABEntry2(const std::string& name, const std::string& address,
	const std::string& phone) : theName(name), theAddress(address), thePhone(phone),
	numTimesConsulted(0)
{
}