﻿#include <iostream> 
#include "Functions.h"

using namespace std;

void Breakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 1000; i++)
	{
		sum += add * i; // Выполнение 1 лабораторной работы по ООП
		if (i % 3 == 0)
		{
			add *= 1.1;
		}
		else
		{
			add /= 3.0;
		}
	}
	cout << "Total sum is " << sum << endl;
}

// Сортировка выбором
void SortInt(int* array)
{
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < 10; i++)
	{
		j = i;
		for (int k = i; k < 10; k++)
		{
			if (array[j] > array[k])
			{
				j = k;
			}
		}
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

void SortDouble(double* array)
{
	int j = 0;
	double tmp = 0;
	for (int i = 0; i < 10; i++)
	{
		j = i;
		for (int k = i; k < 10; k++)
		{
			if (array[j] > array[k])
			{
				j = k;
			}
		}
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

double GetPower(double base, int exponent)
{
	if (exponent > 0)
	{
		return base * GetPower(base, exponent - 1);
	}
	else
	{
		return 1;
	}
}

void DemoGetPower(double base, int exponent)
{
	cout << "Enter base:" << endl;
	cin >> base;

	cout << "Enter exponent:" << endl;
	cin >> exponent;

	cout << endl << base << " ^ " << exponent << " = " << GetPower(base, exponent) << endl;
}

void RoundToTens(int& value)
{
	if ((value % 10) < 5)
	{
		value = value / 10 * 10;
	}
	else
	{
		value = value / 10 * 10 + 10;
	}
}

void Foo(double a) 
{
	cout << "Address of a in Foo(): " << &a << endl;  
	cout << "Value of a in Foo(): " << a << endl;

	a = 15.0;  
	cout << "New value of a in Foo(): " << a << endl;
}

void Foo1(double& a) 
{
	cout << "Address of a in Foo(): " << &a << endl; 
	cout << "Value of a in Foo(): " << a << endl;

	a = 15.0;  
	cout << "New value of a in Foo(): " << a << endl;
}

void Foo2(double* a) 
{
	cout << "Address in pointer: " << a << endl;  
	cout << "Address of pointer: " << &a << endl;  
	cout << "Value in pointer address: " << *a << endl;

	*a = 15.0;  
	cout << "New value in pointer address: " << *a << endl;
}

int IndexOf(int* array, int value)
{	
	// TODO: зачем переменная index, когда можно использовать i?
	// + - Неправильно исправлено. Теперь у тебя целых три переменных i в функции
	int i = 0;
	int	length = 0;

	for (int i = 0; array[i]; ++i) //TODO: так размер целочисленного массива не определяют! Это работает только для строк
	{
		++length;
	}

	if (array == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = 0; length; ++i)
		{
			if (array[i] == value)
			{
				return i;
			}
			else ++i;
			if (i > length) //TODO: не нужно городить это условие, которое будет проверяться в КАЖДОЙ итерации. Оператор под условием должен выполниться, если цикл ничего не нашел - следовательно, оператор надо поставить в другое место
			{
				return -1;
			}
		}
	}
}

int GetLetters(char* string)
{
	int length = 0;
	if (string == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = 0;  string[i]; i++)
		{
			if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
			{
				++length;
			}

		}
	}
	return length;
}

int* MakeRandomArray(int arraySize) 
{
	int* array = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		array[i] = (rand() % 100);
	}

	return array;
}

int* ReadArray(int count) 
{ 
	int* values = new int[count];
	for (int i = 0; i < count; i++) 
	{
		cin >> values[i]; 
	}    
	return values; 
}

int CountPositiveValues(int* values, int count) 
{
	int result = 0;    
	for (int i = 0; i < count; i++)
	{
		if (values[i] > 0) 
		{ 
			result++; 
		}
	}    
	return result;
}

int GetLength(char* string)
{
	int length = 0;
	if (string == NULL)
	{
		return -1;
	}
	else
	{
		for (int i = 0; string[i]; ++i)
		{
			++length;
		}
	}
	return length;
}