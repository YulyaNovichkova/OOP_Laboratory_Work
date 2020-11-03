#include <iostream>
#include "Function.h"

using namespace std;

const int COUNT = 5;

void DemoRectangle()
{
	Rectangle regtangle;
	Rectangle* firstPointer = &regtangle;
	cout << "Enter length regtangle (positive number):" << endl;
	cin >> firstPointer->Length;
	cout << "Enter width regtangle (positive number):" << endl;
	cin >> firstPointer->Width;
	cout << "Enter color regtangle:" << endl;
	cin >> firstPointer->Color;
	cout << endl;


	cout << "The rectangle has dimensions: "
		<< firstPointer->Length << "x" << firstPointer->Width << endl << endl;

	Rectangle* secondPointer = &regtangle;
	cout << "Address first figure: " << firstPointer << endl
		<< "Address second figure: " << secondPointer << endl << endl;
}

void DemoReadAndWriteRectangles()
{
	Rectangle rectangle[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		ReadRectangle(rectangle[i]);
	}

	for (int i = 0; i < COUNT; i++)
	{
		WriteRectangle(rectangle[i]);
	}

	Exchange(rectangle[0], rectangle[1]);
	WriteRectangle(rectangle[0]);
	WriteRectangle(rectangle[1]);

	FindRectangle(rectangle, COUNT);
	FindMaxRectangle(rectangle, COUNT);
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

Rectangle* MakeRectangle(int lenght, int width, string color)
{
	Rectangle* rectangle = new Rectangle();
	rectangle->Length = lenght;
	rectangle->Width = width;
	rectangle->Color = color;
	return rectangle;
}

Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copiedRectangle = new Rectangle();
	copiedRectangle->Length = rectangle.Length;
	copiedRectangle->Width = rectangle.Width;
	copiedRectangle->Color = rectangle.Color;
	return copiedRectangle;
}