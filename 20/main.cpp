#include "Person.h"
#include "Date.h"

int main()
{
	Person someone(22, Date(1997, 07, 01));
	
	someone.getAge();
	someone.getBirthday();
	return 0;
}