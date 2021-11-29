#include "Rhombus.h"

Rhombus::Rhombus()
{
	rhombus_side_ = 0;
	angle_ = 0;
}

Rhombus::Rhombus(Point centre, double side, double angle) : Point(centre)
{
	rhombus_side_ = side;
	angle_ = angle;
}

Rhombus::Rhombus(double x, double y, double side, double angle) : Point(x, y)
{
	rhombus_side_ = side;
	angle_ = angle;
}

void Rhombus::SetPoint(Point centre)
{
	centre_coord_ = centre;
}

void Rhombus::SetSide(double side)
{
	rhombus_side_ = side;
}

void Rhombus::SetAngle(double angle)
{
	angle_ = angle;
}

Point Rhombus::GetPoint()
{
	return centre_coord_;
}

double Rhombus::GetSide()
{
	return rhombus_side_;
}

double Rhombus::GetAngle()
{
	return angle_;
}

double Rhombus::Square()
{
	return pow(rhombus_side_, 2) * sin(angle_);
}

void Rhombus::Show()
{ 
	Point::Show();
	cout << "Length of side: " << rhombus_side_ << ";Angle: " << angle_ << endl;
}

Rhombus Rhombus::operator=(Rhombus rhombus)
{
	Rhombus res;

	res.centre_coord_ = rhombus.centre_coord_;
	res.x_ = rhombus.x_;
	res.y_ = rhombus.y_;
	res.rhombus_side_ = rhombus.rhombus_side_;
	res.angle_ = rhombus.angle_;

	return res;
}