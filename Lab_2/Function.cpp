#include <iostream> 
#include <exception> 
#include "Function.h"

using namespace std;

// Сортирует массив вещественных чисел 
void Sort(double* values, int count) 
{
	if (count < 0)
	{
		throw exception("count");
	}

	double swap;    
	for (int i = 0; i < count; i++)    
	{       
		for (int j = 0; j < count; j++)       
		{          
			if (values[i] < values[j])           
			{             
				swap = values[i];             
				values[i] = values[j];             
				values[j] = swap;          
			}       
		}    
	}
} 

// Демонстрирует работу сортировки 
void DemoSort()  
{ 
	int count = 5;    
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};   
	
	try
	{	
		Sort(values, count); 
		//Sort(values, -3);
	}
	catch (exception err)
	{
		cout << "Exception catched!" << endl;
	}
	ShowArray(values, count);
}

void ShowArray(double* values, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << values[i] << "  ";
	}
	cout << endl;
}