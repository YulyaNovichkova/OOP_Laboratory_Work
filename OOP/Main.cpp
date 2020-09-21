#include <iostream> 
#include <time.h>
#include "Functions.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Breakpoints();
	system("pause");

	int* array1 = new int[10];

	for (int i = 0; i < 10; i++)
	{
		array1[i] = (rand() % 100);
	}

	cout << "Source array is:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << array1[i] << " ";
	}

	SortInt(array1);
	cout << endl;
	cout << "Sorted array is:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << array1[i] << " ";
	}
	cout << endl;
	system("pause");

	double* array2 = new double[12];
	double searchingValue;

	for (int i = 0; i < 12; i++)
	{
		array2[i] = (double)(rand() % 1000) / 10;
	}

	cout << "Source array is:" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << array2[i] << " ";
	}
	cout << endl;

	cout << "Enter searching value: ";
	cin >> searchingValue;

	int temp = 0;
	for (int i = 0; i < 12; i++)
	{
		if (array2[i] >= searchingValue)
		{
			temp++;
		}
	}
	cout << "Elements of array more than " << searchingValue << " is: " << temp << endl;
	cout << endl;
	system("pause");

	char* arrayChar = new char[8];

	for (int i = 0; i < 8; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> arrayChar[i];
	}

	cout << "Your array is: " << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << arrayChar[i] << " ";
	}
	cout << endl;

	cout << "All letters in your array: " << endl;
	for (int i = 0; i < 8; i++)
	{
		if (arrayChar[i] >= 'a' && arrayChar[i] <= 'z')
		{
			cout << arrayChar[i] << " ";
		}
	}
	cout << endl;
	system("pause");

	double* base =  new double;
	int* exponent = new int;
	
	DemoGetPower(*base, *exponent);
	system("pause");

	int value;
	cout << "Enter value:" << endl;
	cin >> value;
	int oldValue = value;

	RoundToTens(value);
	cout << "For " << oldValue << " rounded value is " << value << endl;
	system("pause");

	{
		int a = 5;  int b = 4;  
		cout << "Address of a: " << &a << endl;  
		cout << "Address of b: " << &b << endl;

		double c = 13.5;  
		cout << "Address of c: " << &c << endl;

		bool d = true;  
		cout << "Address of d: " << &d << endl;
	}

	cout << endl;

	{
		int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };   
		cout << "Size of int type: " << sizeof(int) << endl;    
		for (int i = 0; i < 10; i++) 
		{ 
			cout << "Address of a[" << i << "]: " << &a[i] << endl; 
		}

		cout << endl;    

		cout << "Size of double type: " << sizeof(double) << endl;    
		double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2 };    
		for (int i = 0; i < 10; i++) 
		{ 
			cout << "Address of b[" << i << "]: " << &b[i] << endl; 
		}
	}

	cout << endl;

	{
		int a = 5;  
		int& b = a;

		cout << "Address of a: " << &a << endl;  
		cout << "Address of b: " << &b << endl;

		cout << endl;  b = 7;  cout << "Value of a: " << a << endl;
	}
	system("pause");
	
	cout << endl;

	{
		double a = 5.0;  
		cout << "Address of a in main(): " << &a << endl;
		cout << "Value of a in main(): " << a << endl;  
		cout << endl;    
		Foo(a);

		cout << endl;  
		cout << "Value of a in main(): " << a << endl;
	}

	cout << endl;

	{
		double a = 5.0;  
		cout << "Address of a in main(): " << &a << endl;  
		cout << "Value of a in main(): " << a << endl;  
		cout << endl;    
		Foo1(a);

		cout << endl;  
		cout << "Value of a in main(): " << a << endl;
	}

	system("pause");
	cout << endl;

	{
		int a = 5;  
		int* pointer = &a;

		cout << "Address of a: " << &a << endl;  
		cout << "Address in pointer: " << pointer << endl;  
		cout << "Address of pointer: " << &pointer << endl;

		cout << endl;  
		*pointer = 7;  
		cout << "Value in a: " << a << endl;  
		cout << "Value by pointer address: " << *pointer << endl;
	}
	cout << endl;

	{
		double value = 5.0;  
		double* pointer = &value;  
		cout << "Address of value in main(): " << &value << endl;  
		cout << "Address in pointer in main(): " << pointer << endl;
		cout << "Address of pointer in main(): " << &pointer << endl;  
		cout << "Value of a in main(): " << value << endl;  cout << endl; 

		Foo2(pointer);

		cout << endl; 
		cout << "Value of a in main(): " << value << endl;
	}
	cout << endl;
	system("pause");

	{
		double* array = new double[10];
		for (int i = 0; i < 10; i++)
		{
			array[i] = (double)(rand() % 410 + (-200)) / 10;
		}

		cout << "Array of double: ";
		for (int i = 0; i < 10; i++)
		{
			cout << array[i] << " ";
		}

		delete[] array;
	}
	cout << endl;
	system("pause");

	{
		bool* array = new bool[10];

		cout << "Array of bool: " << endl;
		for (int i = 0; i < 10; i++)
		{
			if ((rand() % 10) % 10 == 0)
			{
				array[i] = true;
				cout << "true ";
			}
			else
			{
				array[i] = false;
				cout << "false ";
			}
		}
		cout << endl;
	}

	{
	int value;
	cout << "Enter char array size: ";
	cin >> value;

	char* array = new char[value];
	for (int i = 0; i < value; i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> array[i];
	}

	cout << "Your char array is: " << endl;
	for (int i = 0; i < value; i++)
	{
		cout << array[i] << " ";
	}
	}
	cout << endl;
	system("pause");

	{
		double* array = new double[10];

		for (int i = 0; i < 10; i++)
		{
			array[i] = (double)(rand() % 500) / 10;
		}

		cout << "Array of double::" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;

		SortDouble(array);
		cout << endl;
		cout << "Sorted array of double:" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << array[i] << " ";
		}

		delete[] array;

		cout << endl;
		system("pause");
	}

	{
		int* array = new int[10];
		int searchingValue;

		for (int i = 0; i < 10; i++)
		{
			array[i] = (rand() % 100);
		}

		cout << "Int array:" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << array[i] << " ";
		}

		cout << endl << "Enter searching value: ";
		cin >> searchingValue;

		cout << "Index of searching value " << searchingValue  << " is: " << IndexOf(array, searchingValue) << endl;

		cout << endl;
		system("pause");
	}

	{
		char* array = new char[15];

		for (int i = 0; i < 15; i++)
		{
			cout << "a[" << i << "]: ";
			cin >> array[i];
		}

		cout << "Char array is: " << endl;
		for (int i = 0; i < 15; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
		
		cout << "Letters in array:  " << endl;
		for (int i = 0; i < 15; i++)
		{
			if (array[i] >= 'a' && array[i] <= 'z')
			{
				cout << array[i] << " ";
			}
		}
		cout << endl;

		cout << "Number of letters in a string: " << GetLetters(array) << endl;

		system("pause");
	}

	{
	int arraySize;
	cout << "Enter char array size: ";
	cin >> arraySize;

	MakeRandomArray(arraySize);

	cout << "Random array of " << arraySize << ":" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << *(MakeRandomArray(arraySize)) << " ";
	}

	delete MakeRandomArray(arraySize);
	
	cout << endl;
	system("pause");
	}

	{
	int count = 15;    
	int* values = ReadArray(count);    
	cout << "Count is: " << CountPositiveValues(values, count) << endl;
	//strochka nije ustranyaet utechku pam'yati
	delete[] values;

	count = 20;    
	values = ReadArray(count);    
	cout << "Count is: " << CountPositiveValues(values, count) << endl;
	delete[] values;
	}

	system("pause");
	return 0;
}