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
	static std::new_handler set_new_handler(std::new_handler in_p) // 2. outOfMem�� in_p�� ��
	{
		std::new_handler old_new_handler = m_currentHandler; // 3. �ʱ� m_currentHandler�� NULL�� �����
		m_currentHandler = in_p; // 4. m_currentHandler�� outOfMem���� ��ġ
		return old_new_handler; // 5. ó�� �ڵ鷯�� NULL�� ����
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
	CBASE::set_new_handler(outOfMem); /* 1. set_new_handler�� outOfMem�� 
									        �Բ� ȣ�� ������ �Ҹ��ڰ� ���� ������
									        �ٷ� set_new_handler�� ���� */
	CBASE *pBicDataArray = new CBASE; // 6. CBASE�� ����� �Ķ���ͷ� operator new�� ȣ��
}