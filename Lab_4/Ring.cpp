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

	this->_externalRadius = externalRadius;
	this->_internalRadius = internalRadius;
}

void Ring::SetCenter(double x, double y)
{
	this->_center = Point(x, y);
}

double Ring::GetExternalRadius()
{
	return this->_externalRadius;
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