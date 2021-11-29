#pragma once
#include "Header.h"
#include "Classes.h"

class CircleInRhombus : public Circle, Rhombus
{
public:
	CircleInRhombus();
	CircleInRhombus(Circle circle, Rhombus rhombus, double square);

	void SetCircle(Circle circle);
	void SetRhombus(Rhombus rhombus);
	void SetSquare(double square);

	Circle GetCircle();
	Rhombus GetRhombus();
	double GetSquare();

	void Show() override;

	CircleInRhombus operator=(CircleInRhombus circleinrhombus);
private:
	Circle circle_;
	Rhombus rhombus_;

	double free_square_;
};
