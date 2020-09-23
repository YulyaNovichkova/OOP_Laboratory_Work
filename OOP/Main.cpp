#include <iostream> 
#include <time.h>
#include "Functions.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Breakpoints();
	system("pause");

	{
		int size = 10;
		int* array = MakeRandomArray(size);

		cout << "Source array is:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}

		SortInt(array);
		cout << endl;
		cout << "Sorted array is:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;

		delete[] array;
		system("pause");
	}

	{
		int size = 12;

		double* array = new double[size];
		double searchingValue;

		for (int i = 0; i < size; i++)
		{
			array[i] = (double)(rand() % 1000) / 10;
		}

		cout << "Source array is:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;

		cout << "Enter searching value: ";
		cin >> searchingValue;

		int temp = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i] >= searchingValue)
			{
				temp++;
			}
		}
		cout << "Elements of array more than " << searchingValue << " is: " << temp << endl;
		cout << endl;

		delete[] array;
		system("pause");
	}

	{
		int size = 8;
		char* arrayChar = new char[size];

		for (int i = 0; i < size; i++)
		{
			cout << "a[" << i << "]: ";
			cin >> arrayChar[i];
		}

		cout << "Your array is: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << arrayChar[i] << " ";
		}
		cout << endl;

		cout << "All letters in your array: " << endl;
		for (int i = 0; i < size; i++)
		{
			if (arrayChar[i] >= 'a' && arrayChar[i] <= 'z')
			{
				cout << arrayChar[i] << " ";
			}
		}
		cout << endl;

		delete[] arrayChar;
		system("pause");
	}

	{
		double* base = new double;
		int* exponent = new int;

		DemoGetPower(*base, *exponent);
		system("pause");
	}

	{
		int value;
		cout << "Enter value:" << endl;
		cin >> value;
		int oldValue = value;

		RoundToTens(value);
		cout << "For " << oldValue << " rounded value is " << value << endl;
		system("pause");
	}

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
		cout << endl;
		system("pause");
	}

	{
		int size = 10;
		double* array = new double[size];

		for (int i = 0; i < size; i++)
		{
			array[i] = (double)(rand() % 500) / 10;
		}

		cout << "Array of double::" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
		SortDouble(array);
		cout << endl;
		cout << "Sorted array of double:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}

		delete[] array;

		cout << endl;
		system("pause");
	}

	{
		int size = 10;
		int* array = new int[size];
		int searchingValue;

		for (int i = 0; i < size; i++)
		{
			array[i] = (rand() % 100);
		}

		cout << "Int array:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}

		cout << endl << "Enter searching value: ";
		cin >> searchingValue;
		if (IndexOf(array, searchingValue) >= 0)
		{
			cout << "Index of searching value " << searchingValue << " is: " << IndexOf(array, searchingValue) << endl;
		}
		else 
		{
			cout << "The value does not exist." << endl;
		}

		delete[] array;
		cout << endl;
		system("pause");
	}

	{
		//TODO: названия переменных вводят заблуждение. Size должна определять весь размер массива, т.е. в данном случае 16. Если хочешь сделать последний символ нулевым, то просто последующие циклы сделай на количество size минус один
		int size = 15;
		char* array = new char[16];

		for (int i = 0; i < size; i++)
		{
			cout << "a[" << i << "]: ";
			cin >> array[i];
		}

		array[15] = '\0';

		cout << "Char array is: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
		
		cout << "Letters in array:  " << endl;
		for (int i = 0; i < size; i++)
		{
			if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z'))
			{
				cout << array[i] << " ";
			}
		}
		cout << endl;

		cout << "Number of letters in a string: " << GetLetters(array) << endl;

		delete[] array;
		system("pause");
	}

	{
		int arraySize;
		cout << "Enter integer array size: ";
		cin >> arraySize;
		int* array = MakeRandomArray(arraySize);

		cout << "Random array of " << arraySize << ":" << endl;
		for (int i = 0; i < arraySize; i++)
		{
			cout << array[i] << " ";
		}
		
		delete [] array;

		cout << endl;
		system("pause");
	}

	{
		cout << "Enter your integer array:" << endl;
		int count = 15;
		int* values = ReadArray(count);
		cout << "Count is: " << CountPositiveValues(values, count) << endl;

		delete[] values;

		cout << "Enter your integer array:" << endl;
		count = 20;
		values = ReadArray(count);
		cout << "Count is: " << CountPositiveValues(values, count) << endl;
		delete[] values;
	}

	system("pause");
	return 0;
}