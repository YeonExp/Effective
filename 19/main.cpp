#include <iostream>
#include <memory>

class Point
{
public:
	Point();
	Point(int x, int y);
	~Point();
	void setX(int newVal);
	void setY(int newVal);
private:
	int x;
	int y;
};

void Point::setX(int newVal)
{
	x = newVal;
}

void Point::setY(int newVal)
{
	y = newVal;
}

Point::Point()
{
	setX(0);
	setY(0);
}

Point::Point(int x, int y)
{
	setX(x);
	setY(y);
}

Point::~Point() { }
struct RectData
{
	Point ulhc;
	Point lrhc;
};

class Rectangle
{
public:
	Rectangle(Point a, Point b);
	Point& upperLeft() const { return pData->ulhc; }
	Point& lowerRight() const { return pData->lrhc; }
private:
	std::tr1::shared_ptr<RectData> pData;
};

Rectangle::Rectangle(Point a, Point b) : pData(new RectData)
{
	pData->ulhc = a;
	pData->lrhc = b;
}

int main()
{
	Point upper(0, 0);
	Point lower(100, 100);

	const Rectangle rec(upper, lower);
	return 0;
}