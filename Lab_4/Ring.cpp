#include <iostream>
#include "Ring.h"
#include "DoubleValidator.h"

using namespace std;

int Ring::AllRingsCount = 0;

void Ring::SetRadius(double externalRadius, double internalRadius)
{
	DoubleValidator::AssertPositiveValue(externalRadius);
	DoubleValidator::AssertPositiveValue(internalRadius);

	if (externalRadius < internalRadius || internalRadius > externalRadius)
	{
		throw exception("The internal radius must always be less than the external radius.");
	}

	this->_exteranalRadius = externalRadius;
	this->_internalRadius = internalRadius;
}

void Ring::SetCenter(double x, double y)
{
	this->_center = Point(x, y);
}

double Ring::GetExternalRadius()
{
	return this->_exteranalRadius;
}

double Ring::GetInternalRadius()
{
	return this->_internalRadius;
}

Point Ring::GetCenter()
{
	return this->_center;
}

double Ring::GetArea()
{
	double internalArea = 3.14 * pow(GetInternalRadius(), 2);
	double externalArea = 3.14 * pow(GetExternalRadius(), 2);
	return externalArea - internalArea;
}

Ring::Ring(double externalRadius, double internalRadius, double x, double y)
{
	this->SetRadius(externalRadius, internalRadius);
	this->SetCenter(x, y);
	Ring::AllRingsCount++;
}

void DemoRing()
{
	cout << "Number of rings before calling the constructor: " << Ring::GetAllRingsCount() << endl;

	Ring* ring1 = new Ring(10.0, 5.0, 2.0, 3.0);
	cout << "Radius is " << ring1->GetArea() << endl;
	cout << "Number of rings after  calling the constructor: " << Ring::GetAllRingsCount() << endl;

	Ring* ring2 = new Ring(8.7, 4.8, 0.0, 0.0);
	cout << "Radius is " << ring2->GetArea() << endl;
	cout << "Number of rings after  calling the constructor: " << Ring::GetAllRingsCount() << endl;

	try
	{
		Ring* ring3 = new Ring(-10.0, -5.0, 9.0, 4.5);
	}
	catch (exception e)
	{
		cout << "An exception." << endl;
	}

	try
	{
		Ring* ring4 = new Ring(5.0, 10.0, 0.0, 0.0);
	}
	catch (exception e)
	{
		cout << "An exception." << endl;
	}
	
	delete ring1;
	cout << "Number of rings after  calling the destructor: " << Ring::GetAllRingsCount() << endl;
	delete ring2;
	cout << "Number of rings after  calling the destructor: " << Ring::GetAllRingsCount() << endl;
}

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

Ring::Ring()
{
	Ring::AllRingsCount++;
}

Ring::~Ring()
{
	Ring::AllRingsCount--;
}