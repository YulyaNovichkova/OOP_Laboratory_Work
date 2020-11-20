#include "Rectangle.h"
#include "DoubleValidator.h"

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

Point Rectangle::GetPoint()
{
	return this->_point;
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetPoint(double x, double y)
{
	this->_point = Point(x, y);
}

Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->SetLength(length);
	this->SetWidth(width);
	this->SetPoint(x, y);
}

Rectangle::Rectangle()
{
	this->_length = 0.0;
	this->_width = 0.0;
	this->_point = Point(0.0, 0.0);
}