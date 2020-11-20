#include "GeometricProgram.h"

void GeometricProgram::DemoRing()
{
	cout << endl;
	cout << "Number of rings before calling the constructor: " << Ring::GetAllRingsCount() << endl;

	Ring* ring1 = new Ring(10.0, 5.0, 2.0, 3.0);
	cout << "Radius is " << ring1->GetArea() << endl;
	cout << "Number of rings after  calling the constructor: " << Ring::GetAllRingsCount() << endl;

	Ring* ring2 = new Ring(8.7, 4.8, 0.0, 0.0);
	cout << "Radius is " << ring2->GetArea() << endl;
	cout << "Number of rings after  calling the constructor: " << Ring::GetAllRingsCount() << endl;

	try
	{
		Ring* ring3 = new Ring(-10.0, -5.0, 9.0, 4.5);
	}
	catch (exception e)
	{
		cout << "An exception." << endl;
	}

	try
	{
		Ring* ring4 = new Ring(5.0, 10.0, 0.0, 0.0);
	}
	catch (exception e)
	{
		cout << "An exception." << endl;
	}

	delete ring1;
	cout << "Number of rings after  calling the destructor: " << Ring::GetAllRingsCount() << endl;
	delete ring2;
	cout << "Number of rings after  calling the destructor: " << Ring::GetAllRingsCount() << endl;
}

void GeometricProgram::DemoRectangleWithPoint()
{
	cout << endl;

	const int COUNT = 5;
	double xCenter = 0.0;
	double yCenter = 0.0;

	Rectangle* rectangle = new Rectangle[COUNT];

	rectangle[0] = Rectangle(25.5, 1.1, 5.0, 10.7);
	rectangle[1] = Rectangle(50.0, 7.3, 12.0, -10.7);
	rectangle[2] = Rectangle(4.7, 43.6, -7.0, 16.2);
	rectangle[3] = Rectangle(9.2, 23.9, -4.0, 4.8);
	rectangle[4] = Rectangle(17.9, 38.0, -3.0, -2.1);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangle[i].GetPoint().GetX() << ";" << "\t"
			<< "Y = " << rectangle[i].GetPoint().GetY() << ";" << "\t"
			<< "Length = " << rectangle[i].GetLength() << ";" << "\t"
			<< "Width = " << rectangle[i].GetWidth() << endl;
		xCenter += rectangle[i].GetPoint().GetX();
		yCenter += rectangle[i].GetPoint().GetY();
	}

	xCenter /= COUNT;
	yCenter /= COUNT;

	cout << "Xcenter = " << xCenter << ";" << "\t"
		<< "Ycenter = " << yCenter << endl;

	delete[] rectangle;
}

void GeometricProgram::DemoCollision()
{
	cout << endl;

	const int COUNT = 4;

	Rectangle* rectangles = new Rectangle[COUNT];

	rectangles[0] = Rectangle(5.0, 10.0, 0.0, 0.0);
	rectangles[1] = Rectangle(5.0, 10.0, 2.0, 2.0);
	rectangles[2] = Rectangle(4.0, 6.0, 0.0, 0.0);
	rectangles[3] = Rectangle(4.0, 6.0, 5.0, 5.0);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "Rectangle #" << i << " and #" << i + 1 << " ";
		if (CollisionManager::IsCollision(rectangles[i], rectangles[i++]))
		{
			cout << "intersect." << endl;
		}
		else
		{
			cout << "do not intersect." << endl;
		}
	}

	cout << endl;

	Ring* rings = new Ring[COUNT];
	rings[0] = Ring(10.0, 5.0, -1.0, -1.0);
	rings[1] = Ring(10.0, 5.0, 2.0, 3.0);
	rings[2] = Ring(3.5, 1.5, -3.0, -2.5);
	rings[3] = Ring(4.5, 1.5, 3.5, 2.5);


	for (int i = 0; i < COUNT; i++)
	{
		cout << "Ring #" << i << " and #" << i + 1 << " ";
		if (CollisionManager::IsCollision(rings[i], rings[i++]))
		{
			cout << "intersect." << endl;
		}
		else
		{
			cout << "do not intersect." << endl;
		}
	}

	delete[] rectangles;
	delete[] rings;
}