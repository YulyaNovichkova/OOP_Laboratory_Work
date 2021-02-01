#include "Product.h"

string Product::GetName()
{
	return this->_name;
}

CategoryType Product::GetCategory()
{
	return this->_category;
}

double Product::GetCost()
{
	return this->_cost;
}

void Product::SetName(string name)
{
	this->_name = name;
}

void Product::SetCategory(CategoryType category)
{
	this->_category = category;
}

void Product::SetCost(double cost)
{
	if (cost < 0 || cost > 100000)
	{
		throw exception("Cost must be between 0 and 100000");
	}
	this->_cost = cost;
}

Product::Product()
{

}

Product::Product(string name, CategoryType category, double cost)
{
	SetName(name);
	SetCategory(category);
	SetCost(cost);
}