#include <iostream>
#include "Band.h"
#include "GeometricProgram.h"

int main()
{
	GeometricProgram* menu = new GeometricProgram();
	
	int menuItem;
	bool key = true;

	do
	{
		cout << endl;
		cout << "1. DemoRing();" << endl
			<< "2. DemoRectangleWithPoint();" << endl
			<< "3. DemoCollision();" << endl
			<< "0. Exit." << endl;
		cin >> menuItem;
		switch (menuItem)
		{
		case 1:
		{
			menu->DemoRing();
			system("pause");
			break;
		}
		case 2:
		{
			menu->DemoRectangleWithPoint();
			system("pause");
			break;
		}
		case 3:
		{
			menu->DemoCollision();
			system("pause");
			break;
		}
		case 0:
		{
			key = false;
			delete menu;
		}
		}

	} while (key);
}