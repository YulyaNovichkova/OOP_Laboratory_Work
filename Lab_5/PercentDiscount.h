#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
private:
	double _percent;

public:
	void SetPrecent(double percent);

	double GetPrecent();

	PercentDiscount(CategoryType category, double percent);
	double Calculate(Product* product) override;
};