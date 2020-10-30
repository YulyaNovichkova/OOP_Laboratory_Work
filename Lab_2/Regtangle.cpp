#include <iostream>
#include "Function.h"
//TODO: именование файла
using namespace std;
//TODO: именование
const int coutn = 5;

void DemoReadAndWriteRectangles()
{
	Rectangle rectangle[coutn];

	for (int i = 0; i < coutn; i++)
	{
		ReadRectangle(rectangle[i]);
	}

	for (int i = 0; i < coutn; i++)
	{
		WriteRectangle(rectangle[i]);
	}

	Exchange(rectangle[0], rectangle[1]);
	WriteRectangle(rectangle[0]);
	WriteRectangle(rectangle[1]);

	FindRectangle(rectangle, coutn);
	FindMaxRectangle(rectangle, coutn);
}

void WriteRectangle(Rectangle& rectangle)
{
	cout << "The rectangle has dimensions: "
		<< rectangle.Length << "x" << rectangle.Width << endl << endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	cout << "Enter length regtangle (positive number):" << endl;
	cin >> rectangle.Length;
	cout << "Enter width regtangle (positive number):" << endl;
	cin >> rectangle.Width;
	cout << "Enter color regtangle:" << endl;
	cin >> rectangle.Color;
	cout << endl;
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle swap;

	swap = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = swap;
}

void FindRectangle(Rectangle* rectangles, int count)
{
	int max = rectangles[0].Length;
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if (max < rectangles[i].Length)
		{
			max = rectangles[i].Length;
			index = i;
		}
	}
	cout << "The rectangle with the maximum length is: "
		<< rectangles[index].Length << "x" << rectangles[index].Width << endl;
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	int max = rectangles[0].Length * rectangles[0].Width;
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if (max < rectangles[i].Length * rectangles[i].Width)
		{
			max = rectangles[i].Length * rectangles[i].Width;
			index = i;
		}
	}

	cout << "The rectangle with the maximum area is: "
		<< rectangles[index].Length << "x" << rectangles[index].Width << endl;
}