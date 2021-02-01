#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(double amount)
{
	if (amount < 0 || amount > 10000)
	{
		throw exception("The size of the amount must be between 0 and 10000");
	}
	this->_amount = amount;
}

double CertificateDiscount::GetAmount()
{
	return this->_amount;
}

CertificateDiscount::CertificateDiscount(CategoryType category, double amount)
	: DiscountBase(category)
{
	SetAmount(amount);
}

double CertificateDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == DiscountBase::GetCategory())
	{
		if (GetAmount() > product->GetCost())
		{
			SetAmount(GetAmount() - product->GetCost());
			return 0;
		}
		else
		{
			double newCost = (product->GetCost() - GetAmount());
			SetAmount(0);
			return newCost;
		}
	}
	return product->GetCost();
}