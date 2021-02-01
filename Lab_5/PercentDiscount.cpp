#include "PercentDiscount.h"

void PercentDiscount::SetPrecent(double precent)
{
	if (precent < 0 || precent > 100)
	{
		throw exception("Error");
	}
	this->_percent = precent;
}

double PercentDiscount::GetPrecent()
{
	return this->_percent;
}

PercentDiscount::PercentDiscount(CategoryType category, double precent) 
	: DiscountBase(category)
{
	SetPrecent(precent);
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == DiscountBase::GetCategory())
	{
		return (product->GetCost() - (product->GetCost() * (GetPrecent() / 100)));
	}
	return product->GetCost();
}