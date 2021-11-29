#pragma once
#include "Header.h"
#include "Point.h"

class Rhombus : public Point, Figure
{
public:
	Rhombus();
	Rhombus(Point centre, double side, double angle);
	Rhombus(double x, double y, double side, double angle);

	void SetPoint(Point centre) override;
	void SetSide(double side);
	void SetAngle(double angle);
	
	Point GetPoint() override;
	double GetSide();
	double GetAngle();

	double Square() override;

	void Show() override;

	Rhombus operator=(Rhombus rhombus);
private:
	Point centre_coord_;

	double rhombus_side_;
	double angle_;

};