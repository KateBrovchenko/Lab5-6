#pragma once
#include "Header.h"
#include "Point.h"

class Circle : Point, Figure
{
public:
	Circle();
	Circle(Point centre, double radius);
	Circle(double x, double y, double radius);

	void SetPoint(Point centre) override;
	void SetRadius(double radius);

	Point GetPoint() override;
	double GetRadius();

	double Square() override;

	void Show() override;

	Circle operator=(Circle circle);
private:
	Point centre_coord_;
	double radius_;
};