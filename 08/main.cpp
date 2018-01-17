#include <iostream>
#include <algorithm>

class CTextBlock
{
public:
	std::size_t length() const;
private:
	char *pText;
	mutable std::size_t textlength;
	mutable bool lengthIsValid;
};

std::size_t CTextBlock::length() const
{
	if (!lengthIsValid) {
		textlength = std::strlen(pText);
		lengthIsValid = true;
	}
	return textlength;
}

int main()
{
	CTextBlock cb;

	std::cout << cb.length() << std::endl;
	return 0;
}