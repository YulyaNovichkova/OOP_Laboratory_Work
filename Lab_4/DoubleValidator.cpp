#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	if (value < 0)
	{
		return false;
	}
	return true;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	if (value < min || value > max)
	{
		return false;
	}
	return true;
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw exception("The value must be greater than 0.");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw exception("Value out of range.");
	}
}