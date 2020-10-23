#include <iostream>
#include "Function.h"

using namespace std;

void DemoEnums()
{
	Color color = Green;
	Day day = Friday;
	Genre genre = Action;
	EducationForm student = FullTime;
	Smartphones smartphone = Apple;
	Season season = Spring;

	Color colors[7] = { Red, Orange, Yellow, Green, Aqua, Blue, Purple };
	Day days[7] = { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	Genre genres[6] = { Comedy, Drama, Thriller, Action, Horror, Blockbuster, };
	EducationForm students[4] = { FullTime, Extramural, Evening, Distance };
	Smartphones smartphones[5] = { Apple, Xiaomi, Lenovo, Samsung, HTS };
	Season seasons[4] = { Spring, Summer, Autumn, Winter };
}

void WriteColor(Color color)
{
	switch (color)
	{
	case Red:
	{
		cout << "Red color" << endl;
		break;
	}
	case Orange:
	{
		cout << "Orange color" << endl;
		break;
	}
	case Yellow:
	{
		cout << "Yellow color" << endl;
		break;
	}
	case Green:
	{
		cout << "Green color" << endl;
		break;
	}
	case Aqua:
	{
		cout << "Aqua color" << endl;
		break;
	}
	case Blue:
	{
		cout << "Blue color" << endl;
		break;
	}
	case Purple:
	{
		cout << "Purple color" << endl;
		break;
	}
	}
}

Color ReadColor()
{

	cout << "Enter a number from 0 to 6" 
		<< " (0 - red, 1 - orange, 2 - yellow, " 
		<< "3 - green, 4 - cyan, 5 - blue, 6 - purple)" << endl;

	int color;
	cin >> color;
	switch (color)
	{
	case Red:
	{
		return Red;
	}
	case Orange:
	{
		return Orange;
	}
	case Yellow:
	{
		return Yellow;
	}
	case Green:
	{
		return Green;
	}
	case Aqua:
	{
		return Aqua;
	}
	case Blue:
	{
		return Blue;
	}
	case Purple:
	{
		return Purple;
	}
	}
}

int CountRed(Color* colors, int count)
{
	int redCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			redCount++;
		}
	}
	return redCount;
}

int CountColor(Color* colors, int count, Color findedColor)
{
	int colorCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			colorCount++;
		}
	}
	return colorCount;
}