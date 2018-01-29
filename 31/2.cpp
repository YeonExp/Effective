#include <iostream>

class NewHandlerHolder
{
public:
	NewHandlerHolder(std::new_handler p)
		: m_handler(p) { }
	~NewHandlerHolder() {
		std::cout << "~NewHandlerHolder()" << std::endl;
		std::set_new_handler(m_handler);
	}
private:
	std::new_handler m_handler;
};

class CBASE
{
public:
	static std::new_handler set_new_handler(std::new_handler in_p) // 2. outOfMem은 in_p에 들어감
	{
		std::new_handler old_new_handler = m_currentHandler; // 3. 초기 m_currentHandler은 NULL이 저장됨
		m_currentHandler = in_p; // 4. m_currentHandler가 outOfMem으로 패치
		return old_new_handler; // 5. 처음 핸들러인 NULL은 리턴
	}

	void* operator new(std::size_t size) throw (std::bad_alloc())
	{
		NewHandlerHolder h(std::set_new_handler(m_currentHandler));
		return ::operator new(size);
	}
private:
	int m_a[499999999L];
	static std::new_handler m_currentHandler;
};

std::new_handler CBASE::m_currentHandler = NULL;
static void outOfMem(void)
{
	std::cerr << "Memory Allocation error.." << std::endl;
	std::abort();
}

int main(void)
{
	CBASE::set_new_handler(outOfMem); /* 1. set_new_handler을 outOfMem과 
									        함께 호출 생성자 소멸자가 없기 때문에
									        바로 set_new_handler로 실행 */
	CBASE *pBicDataArray = new CBASE; // 6. CBASE의 사이즈를 파라미터로 operator new가 호출
}