#include "Circle.h"

Circle::Circle()
{
	radius_ = 0;
}

Circle::Circle(Point centre, double radius) : Point(centre)
{
	radius_ = radius;
}

Circle::Circle(double x, double y, double radius) : Point(x, y)
{
	radius_ = radius;
}

void Circle::SetPoint(Point centre)
{
	centre_coord_ = centre;
}

void Circle::SetRadius(double radius)
{
	radius_ = radius;
}

Point Circle::GetPoint()
{
	return centre_coord_;
}

double Circle::GetRadius()
{
	return radius_;
}

double Circle::Square()
{
	return M_PIl * (radius_, 2);
}

void Circle::Show()
{
	Point::Show();
	cout << "Radius: " << radius_ << endl;
}

Circle Circle::operator=(Circle circle)
{
	Circle res;

	res.centre_coord_ = circle.centre_coord_;
	res.x_ = circle.x_;
	res.y_ = circle.y_;
	res.radius_ = circle.radius_;

	return res;
}