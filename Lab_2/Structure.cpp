#include <iostream>
#include "Structure.h"

using namespace std;

void DemoRectangle() 
{ 
	Regtangle regtangle;
	cout << "Enter length regtangle (positive number):" << endl;
	cin >> regtangle.Length;
	cout << "Enter width regtangle (positive number):" << endl;
	cin >> regtangle.Width;
	cout << "Enter color regtangle:" << endl;
	cin >> regtangle.Color;

	cout << "The rectangle has dimensions: " 
		<< regtangle.Length << "x" << regtangle.Width << endl;
} 

void DemoFlight() 
{
	Flight flight;
	cout << "Enter departure flight:" << endl;
	cin >> flight.Departure;
	cout << "Enter destination flight:" << endl;
	cin >> flight.Destination;
	cout << "Enter time flight:" << endl;
	cin >> flight.TimeFlight;

	cout << "Flight " << flight.Departure << " - " << flight.Destination
		<< " is on the way " << flight.TimeFlight << " minutes" << endl;
} 

void DemoMovie() 
{
	Movie movie;
	cout << "Enter title movie:" << endl;
	cin >> movie.Title;
	cout << "Enter duration movie:" << endl;
	cin >> movie.Duration;
	cout << "Enter year movie:" << endl;
	cin >> movie.Year;
	cout << "Enter genre movie:" << endl;
	cin >> movie.Genre;
	cout << "Enter raiting movie:" << endl;
	cin >> movie.Raiting;

	cout << "Title movie: " << movie.Title << endl
		<< "Duration: " << movie.Duration << endl
		<< "Year: " << movie.Year << endl
		<< "Genre: " << movie.Genre << endl
		<< "Raiting: " << movie.Raiting << endl;
} 

void DemoTime() 
{
	Time time;
	cout << "Enter hours (from 0 to 23):" << endl;
	cin >> time.Hours;
	cout << "Enter minuts (from 0 to 60):" << endl;
	cin >> time.Minuts;
	cout << "Enter seconds (from 0 to 60):" << endl;
	cin >> time.Seconds;

	cout << "Time " << time.Hours << ":" << time.Minuts << ":" 
		<< time.Seconds << endl;
}