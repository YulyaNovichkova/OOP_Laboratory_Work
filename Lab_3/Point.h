#pragma once
#include <iostream>

using namespace std;

class Point
{
private:
	double _x;
	double _y;

public:
	double GetX();
	double GetY();

	void SetX(double x);
	void SetY(double y);

	Point(double x, double y);
	Point();
};