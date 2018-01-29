#include <iostream>

void outOfMem(void)
{
	std::cerr << "Memory Allocation Error~~" << std::endl;
	std::abort();
}

int main()
{
	std::set_new_handler(outOfMem);
	int *alloc = new int[499999999L];
	return 0;
}