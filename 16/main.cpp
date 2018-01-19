#include <iostream>
#include <algorithm>
#include <memory>

class Rational
{
public:
	Rational(int numerator = 0, int denominator = 1);
	int numerator() const;
	int denominator() const;
private:
	int num;
	int denom;
};
const Rational operator*(const Rational& lhs, const Rational& rhs);
const Rational operator*(const Rational& lhs, const Rational& rhs)
{
	int numerator = lhs.numerator() * rhs.numerator();
	int denominator = lhs.denominator() * rhs.denominator();

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

	Rational result = 2 * oneHalf;
	std::cout << result.numerator() << " " << result.denominator() << std::endl;
	return 0;
}