#include <iostream>
#include <algorithm>

class Ball
{
public:
	int _x, _y;
	static int _radius;

	Ball(int x, int y);
	Ball(const Ball& b);

	void ControlSize();
	void ShowBall();
};

void Ball::ControlSize()
{
	if (_x > 800) _x = 800;
	if (_y > 400) _y = 400;
}

void Ball::ShowBall()
{
	std::cout << _x << " : " << _y << " : " << _radius << std::endl;
}

Ball::Ball(int x, int y)
{
	_x = x;
	_y = y;

	ControlSize();
}

Ball::Ball(const Ball& b)
{
	_x = b._x;
	_y = b._y;

	ControlSize();
}

int Ball::_radius = 200;

int main()
{
	Ball *b[4] = {
		Ball()
	};

	return 0;
}