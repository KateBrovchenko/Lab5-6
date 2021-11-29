#pragma once
#include "Point.h"

class Figure
{
	friend class Point;
public:
	virtual void SetPoint(Point centre) = 0;

	virtual Point GetPoint() = 0;

	virtual double Square() = 0;
};