#include "Rectangle.h"

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
	if (length < 0.0)
	{
		throw exception("The length must be positive.");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0.0)
	{
		throw exception("The width must be positive.");
	}
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

void DemoRectangleWithPoint()
{
	const int COUNT = 5;
	double xCenter = 0.0;
	double yCenter = 0.0;

	Rectangle* rectangle = new Rectangle[COUNT];

	rectangle[0] = Rectangle(25.5, 1.1, 5.0, 10.7);
	rectangle[1] = Rectangle(50.0, 7.3, 12.0, -10.7);
	rectangle[2] = Rectangle(4.7, 43.6, -7.0, 16.2);
	rectangle[3] = Rectangle(9.2, 23.9, -4.0, 4.8);
	rectangle[4] = Rectangle(17.9, 38.0, -3.0, -2.1);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangle[i].GetPoint().GetX() << ";" << "\t"
			<< "Y = " << rectangle[i].GetPoint().GetY() << ";" << "\t"
			<< "Length = " << rectangle[i].GetLength() << ";" << "\t"
			<< "Width = " << rectangle[i].GetWidth() << endl;
		xCenter += rectangle[i].GetPoint().GetX();
		yCenter += rectangle[i].GetPoint().GetY();
	}

	xCenter /= COUNT;
	yCenter /= COUNT;

	cout << "Xcenter = " << xCenter << ";" << "\t"
		<< "Ycenter = " << yCenter << endl;

	delete[] rectangle;
}