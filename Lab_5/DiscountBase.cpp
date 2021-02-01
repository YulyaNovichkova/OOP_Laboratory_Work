#include "DiscountBase.h"

void DiscountBase::SetCategory(CategoryType category)
{
	this->_category = category;
}

CategoryType DiscountBase::GetCategory()
{
	return this->_category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	double fullCost = 0.0;
	double tempDiscount;

	for (int i = 0; i < productsCount; i++)
	{
		tempDiscount = discount->Calculate(&products[i]);
		cout << products[i].GetName() << "\tOld Cost: " << products[i].GetCost()
			<< "\tNew Cost: " << tempDiscount << endl;
		fullCost += tempDiscount;
	}
	cout << "Full Cost with Discount: " << fullCost;
}