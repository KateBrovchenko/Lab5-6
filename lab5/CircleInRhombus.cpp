#include "CircleInRhombus.h"

CircleInRhombus::CircleInRhombus()
{
	free_square_ = 0;
}

CircleInRhombus::CircleInRhombus(Circle circle, Rhombus rhombus, double square)
{
	circle_ = circle;
	rhombus_ = rhombus;

	free_square_ = square;
}

void CircleInRhombus::SetCircle(Circle circle)
{
	circle_ = circle;
}

void CircleInRhombus::SetRhombus(Rhombus rhombus)
{
	rhombus_ = rhombus;
}

void CircleInRhombus::SetSquare(double square)
{
	free_square_ = square;
}

Circle CircleInRhombus::GetCircle()
{
	return circle_;
}

Rhombus CircleInRhombus::GetRhombus()
{
	return rhombus_;
}

double CircleInRhombus::GetSquare()
{
	return free_square_;
}

void CircleInRhombus::Show()
{
	Circle::Show();
	Rhombus::Show();

	cout << "Free square: " << free_square_ << endl;
}

CircleInRhombus CircleInRhombus::operator=(CircleInRhombus circleinrhombus)
{
	CircleInRhombus res;

	res.circle_ = circleinrhombus.circle_;
	res.rhombus_ = circleinrhombus.rhombus_;
	res.free_square_ = circleinrhombus.free_square_;

	return res;
}
