#pragma once
#include <iostream>
#include "CategoryType.h"

using namespace std;

class Product
{
private:
	string _name;
	CategoryType _category;
	double _cost;

public:
	string GetName();
	CategoryType GetCategory();
	double GetCost();

	void SetName(string name);
	void SetCategory(CategoryType category);
	void SetCost(double cost);

	Product();
	Product(string name, CategoryType category, double cost);
};