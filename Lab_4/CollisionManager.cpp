#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& rectangle1, Rectangle& rectangle2)
{
	double dX = abs(rectangle1.GetPoint().GetX() - rectangle2.GetPoint().GetX());
	double dY = abs(rectangle1.GetPoint().GetY() - rectangle2.GetPoint().GetY());

	double width = (rectangle1.GetWidth() + rectangle2.GetWidth()) / 2;
	double length = (rectangle1.GetLength() + rectangle2.GetLength()) / 2;

	if (dX < width && dY < length)
	{
		return true;
	}
	return false;
}

bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
	double dX = abs(ring1.GetCenter().GetX() - ring2.GetCenter().GetX());
	double dY = abs(ring1.GetCenter().GetY() - ring2.GetCenter().GetY());

	double hypotenyse = sqrt(pow(dX, 2) + pow(dY, 2));

	if (hypotenyse < (ring1.GetExternalRadius() + ring2.GetExternalRadius()))
	{
		return true;
	}
	return false;
}