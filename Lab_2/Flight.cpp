#include <iostream>
#include "Function.h"

using namespace std;

void DemoDynamicFlight()
{
	Flight* flight = new Flight();
	cout << "Enter departure flight:" << endl;
	cin >> flight->Departure;
	cout << "Enter destination flight:" << endl;
	cin >> flight->Destination;
	cout << "Enter time flight:" << endl;
	cin >> flight->TimeFlight;
	cout << endl;

	cout << "Flight " << flight->Departure << " - " << flight->Destination
		<< " is on the way " << flight->TimeFlight << " minutes" << endl << endl;

	delete flight;
}

void DemoDynamicFlights()
{
	Flight* flight = new Flight[4];



	FindShortestFlight(flight, 4);

	delete[] flight;
}

void FindShortestFlight(Flight* flights, int count)
{
	int shortest = flights[0].TimeFlight;
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].TimeFlight < shortest)
		{
			shortest = flights[i].TimeFlight;
			index = i;
		}
	}

	cout <<"The shortest flight " << flights[index].Departure << " - " << flights[index].Destination
		<< " is on the way " << flights[index].TimeFlight << " minutes" << endl << endl;
}