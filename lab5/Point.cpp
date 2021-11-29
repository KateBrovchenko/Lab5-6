#include "Point.h"

Point::Point()
{
	x_ = 0.0;
	y_ = 0.0;
}

Point::Point(double x, double y)
{
	x_ = x;
	y_ = y;
}

void Point::SetX(double x)
{
	x_ = x;
}

void Point::SetY(double y)
{
	y_ = y;
}

double Point::GetX()
{
	return x_;
}

double Point::GetY()
{
	return y_;
}

void Point::Show()
{
	cout << "X: " << x_ << ";Y: " << y_ << endl;
}

Point Point::operator=(Point point)
{
	Point res;

	res.x_ = point.x_;
	res.y_ = point.y_;

	return res;
}
