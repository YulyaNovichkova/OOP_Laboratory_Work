#include <iostream>
#include "Structure.h"

using namespace std;

const int coutn = 3;

void DemoRectangle() 
{ 
	Regtangle regtangle[coutn];
	for (int i = 0; i < coutn; i++)
	{
		cout << "Enter length regtangle (positive number):" << endl;
		cin >> regtangle[i].Length;
		cout << "Enter width regtangle (positive number):" << endl;
		cin >> regtangle[i].Width;
		cout << "Enter color regtangle:" << endl;
		cin >> regtangle[i].Color;
		cout << endl;
	}

	for (int i = 1; i <= coutn; i++)
	{
		cout << i << ". " << "The rectangle has dimensions: "
			<< regtangle[i].Length << "x" << regtangle[i].Width << endl;
	}
} 

void DemoFlight() 
{
	Flight flight[coutn];
	for (int i = 0; i < coutn; i++)
	{
		cout << "Enter departure flight:" << endl;
		cin >> flight[i].Departure;
		cout << "Enter destination flight:" << endl;
		cin >> flight[i].Destination;
		cout << "Enter time flight:" << endl;
		cin >> flight[i].TimeFlight;
		cout << endl;
	}

	for (int i = 1; i <= coutn; i++)
	{
		cout << i << ". " << "Flight " << flight[i].Departure << " - " << flight[i].Destination
			<< " is on the way " << flight[i].TimeFlight << " minutes" << endl;
	}
} 

void DemoMovie() 
{
	Movie movie[coutn];
	for (int i = 0; i < coutn; i++)
	{
		cout << "Enter title movie:" << endl;
		cin >> movie[i].Title;
		cout << "Enter duration movie:" << endl;
		cin >> movie[i].Duration;
		cout << "Enter year movie:" << endl;
		cin >> movie[i].Year;
		cout << "Enter genre movie:" << endl;
		cin >> movie[i].Genre;
		cout << "Enter raiting movie:" << endl;
		cin >> movie[i].Raiting;
		cout << endl;
	}

	for (int i = 1; i <= coutn; i++)
	{
		cout << i << ". " << "Title movie: " << movie[i].Title << endl
			<< "Duration: " << movie[i].Duration << endl
			<< "Year: " << movie[i].Year << endl
			<< "Genre: " << movie[i].Genre << endl
			<< "Raiting: " << movie[i].Raiting << endl;
	}
} 

void DemoTime() 
{
	Time time[coutn];
	for (int i = 0; i < coutn; i++)
	{
		cout << "Enter hours (from 0 to 23):" << endl;
		cin >> time[i].Hours;
		cout << "Enter minuts (from 0 to 60):" << endl;
		cin >> time[i].Minuts;
		cout << "Enter seconds (from 0 to 60):" << endl;
		cin >> time[i].Seconds;
		cout << endl;
	}

	for (int i = 1; i <= coutn; i++)
	{
		cout << i << ". " << "Time " << time[i].Hours << ":" << time[i].Minuts << ":"
			<< time[i].Seconds << endl;
	}
}