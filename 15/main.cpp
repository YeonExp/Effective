#include <iostream>
#include <algorithm>
#include <memory>

class Rational
{
public:
	Rational(int numerator = 0, int denominator = 1);
	int numerator() const;
	int denominator() const;
	const Rational operator*(const Rational& rhs) const;
private:
	int num;
	int denom;
};

const Rational Rational::operator*(const Rational& rhs) const
{
	int numerator = this->num * rhs.num;
	int denominator = this->denom * rhs.denom;

	return Rational(numerator, denominator);
}

Rational::Rational(int numerator, int denominator)
{
	num = numerator;
	denom = denominator;
}

int Rational::numerator() const
{
	return num;
}

int Rational::denominator() const
{
	return denom;
}

int main()
{
	Rational oneEighth(1, 8);
	Rational oneHalf(1, 2);

	Rational result = oneHalf * oneEighth;

	std::cout << result.numerator() << " " << result.denominator() << std::endl;
	return 0;
}