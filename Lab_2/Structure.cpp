#include <iostream>
#include "Structure.h"

using namespace std;

const int coutn = 3;

void DemoRectangle() 
{ 
	Regtangle regtangle;
	Regtangle* firstPointer = &regtangle;
	cout << "Enter length regtangle (positive number):" << endl;
	cin >> firstPointer->Length;
	cout << "Enter width regtangle (positive number):" << endl;
	cin >> firstPointer->Width;
	cout << "Enter color regtangle:" << endl;
	cin >> firstPointer->Color;
	cout << endl;


	cout << "The rectangle has dimensions: "
		<< firstPointer->Length << "x" << firstPointer->Width << endl << endl;

	Regtangle* secondPointer = &regtangle;
	cout << "Address first figure: " << firstPointer << endl
		<< "Address second figure: " << secondPointer << endl << endl;
} 

void DemoFlight() 
{
	Flight flight;
	Flight* firstPointer = &flight;
	cout << "Enter departure flight:" << endl;
	cin >> firstPointer->Departure;
	cout << "Enter destination flight:" << endl;
	cin >> firstPointer->Destination;
	cout << "Enter time flight:" << endl;
	cin >> firstPointer->TimeFlight;
	cout << endl;

	cout << "Flight " << firstPointer->Departure << " - " << firstPointer->Destination
		<< " is on the way " << firstPointer->TimeFlight << " minutes" << endl << endl;
	
	Flight* secondPointer = &flight;
	cout << "Address first figure: " << firstPointer << endl
		<< "Address second figure: " << secondPointer << endl << endl;
} 

void DemoMovie() 
{
	Movie movie;
	Movie* firstPointer = &movie;
	cout << "Enter title movie:" << endl;
	cin >> firstPointer->Title;
	cout << "Enter duration movie:" << endl;
	cin >> firstPointer->Duration;
	cout << "Enter year movie:" << endl;
	cin >> firstPointer->Year;
	cout << "Enter genre movie:" << endl;
	cin >> firstPointer->Genre;
	cout << "Enter raiting movie:" << endl;
	cin >> firstPointer->Raiting;
	cout << endl;

	cout << "Title movie: " << firstPointer->Title << endl
		<< "Duration: " << firstPointer->Duration << endl
		<< "Year: " << firstPointer->Year << endl
		<< "Genre: " << firstPointer->Genre << endl
		<< "Raiting: " << firstPointer->Raiting << endl << endl;

	Movie* secondPointer = &movie;
	cout << "Address first figure: " << firstPointer << endl
		<< "Address second figure: " << secondPointer << endl << endl;
} 

void DemoTime() 
{
	Time time;
	Time* firstPointer = &time;
	cout << "Enter hours (from 0 to 23):" << endl;
	cin >> firstPointer->Hours;
	cout << "Enter minuts (from 0 to 60):" << endl;
	cin >> firstPointer->Minuts;
	cout << "Enter seconds (from 0 to 60):" << endl;
	cin >> firstPointer->Seconds;
	cout << endl;

	cout << "Time " << firstPointer->Hours << ":" << firstPointer->Minuts << ":"
		<< firstPointer->Seconds << endl << endl;

	Time* secondPointer = &time;
	cout << "Address first figure: " << firstPointer << endl
		<< "Address second figure: " << secondPointer << endl << endl;
}

void WrongPointers()
{
	Flight flight;
	Movie movie;

	Flight* pointerFlight = &flight;
	Movie* pointerMovie = &movie;
}