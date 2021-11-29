#pragma once
#include "Header.h"

class Point
{
public:
	Point();
	Point(double x, double y);

	void SetX(double x);
	void SetY(double y);

	double GetX();
	double GetY();

	virtual void Show();

	Point operator=(Point point);
protected:
	double x_;
	double y_;
};