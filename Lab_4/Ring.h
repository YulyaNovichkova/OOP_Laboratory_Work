#pragma once
#include "Point.h"

class Ring
{
private:
	//TODO: грамошибка
	double _exteranalRadius;
	double _internalRadius;
	Point _center;
	static int AllRingsCount;

public:
	void SetRadius(double externalRadius, double internalRadius);
	void SetCenter(double x, double y);

	double GetExternalRadius();
	double GetInternalRadius();
	Point GetCenter();
	double GetArea();
	static int GetAllRingsCount();
	//TODO: грамошибка
	Ring(double extarnalRadius, double internalRadius, double x, double y);
	Ring();
	~Ring();
};