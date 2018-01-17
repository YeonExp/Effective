#include <iostream>
#include <algorithm>

class ParentClass
{
public:
	ParentClass();
	ParentClass(const ParentClass& pc);
	ParentClass& operator=(const ParentClass& pc);
	std::string parentName;
};

class ChildClass : public ParentClass
{
public:
	ChildClass();
	ChildClass(const ChildClass& pc);
	ChildClass& operator=(const ChildClass& pc);
	std::string childName;
};

ParentClass::ParentClass()
{
	std::cout << "ParentClass() called" << std::endl;
}

ParentClass::ParentClass(const ParentClass& pc) : parentName(pc.parentName)
{
	std::cout << "ParentClass(pc) called" << std::endl;
}

ParentClass& ParentClass::operator=(const ParentClass& pc)
{
	parentName = pc.parentName;
	return *this;
}

ChildClass::ChildClass()
{
	std::cout << "ChildClass() called" << std::endl;
}

ChildClass::ChildClass(const ChildClass& pc) : ParentClass(pc), childName(pc.childName)
{
	std::cout << "ChildClass(pc) called" << std::endl;
}

ChildClass& ChildClass::operator=(const ChildClass& pc)
{
	childName = pc.childName;
	ParentClass::operator=(pc);
	return *this;
}

int main()
{
	ChildClass cs1, cs2;

	cs1.childName = std::string("ChildClass 01");
	cs1.parentName = std::string("ParentClass 01");

	cs2 = cs1;
	std::cout << cs2.childName.c_str() << std::endl;
	std::cout << cs2.parentName.c_str() << std::endl;

	return 0;
}