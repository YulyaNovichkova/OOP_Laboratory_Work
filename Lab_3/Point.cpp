#include "Point.h"

using namespace std;

Point::Point(double x, double y)
{
	this->SetX(x);
	this->SetY(y);
}

void Point::SetX(double x)
{
	this->_x = x;
}

void Point::SetY(double y)
{
	this->_y = y;
}

double Point::GetX()
{
	return this->_x;
}

double Point::GetY()
{
	return this->_y;
}

Point::Point()
{
	this->_x = 0.0;
	this->_y = 0.0;
}