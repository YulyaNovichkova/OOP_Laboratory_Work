#pragma once
#include <iostream>

class Point
{
private:
	double _x;
	double _y;

	void SetX(double x);
	void SetY(double y);

public:
	double GetX();
	double GetY();

	Point(double x, double y);
	Point();
};