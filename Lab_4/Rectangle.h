#pragma once
#include "Point.h"

class Rectangle
{
private:
	double _length;
	double _width;
	Point _point;

public:
	double GetLength();
	double GetWidth();
	Point GetPoint();

	void SetLength(double length);
	void SetWidth(double width);
	void SetPoint(double x, double y);

	Rectangle(double length, double width, double x, double y);
	Rectangle();
};