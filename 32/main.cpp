#include <iostream>
#include <memory>

class StandardNewDeleteForms
{
public:
	static void* operator new(std::size_t size) throw(std::bad_alloc)
	{
		return ::operator new(size);
	}
	static void operator delete(void *pMemory) throw()
	{
		::operator delete(pMemory);
	}
	static void* operator new(std::size_t size, void *ptr) throw()
	{
		return ::operator new(size, ptr);
	}
	static void operator delete(void *pMemory, void *ptr) throw()
	{
		return ::operator delete(pMemory, ptr);
	}
	static void* operator new(std::size_t size, const std::nothrow_t& nt) throw()
	{
		return ::operator new(size, nt);
	}
	static void operator delete(void *pMemory, const std::nothrow_t&) throw()
	{
		::operator delete(pMemory);
	}
};

class Widget : public StandardNewDeleteForms
{
public:
	using StandardNewDeleteForms::operator new;
	using StandardNewDeleteForms::operator delete;
	static void* operator new(std::size_t size,
		std::ostream& logStream) throw(std::bad_alloc) {
		std::cout << "Custom operator new()" << std::endl;
		return ::operator new(size);
	}
	static void operator delete(void *pMemory, std::ostream& logStream) throw() {
		std::cout << "Custom operator delete()" << std::endl;
		::operator delete(pMemory);
	}
};

int main()
{
	// std::tr1::shared_ptr<Widget>temp(new (std::cerr) Widget);
	Widget *wg = new (std::cerr) Widget;

	return 0;
}