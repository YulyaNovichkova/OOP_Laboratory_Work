#include <iostream>
#include "Function.h"

using namespace std;

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

Flight* MakeFlight(string departure, string destination, int timeFlight)
{
	Flight* flight = new Flight();
	flight->Departure = departure;
	flight->Destination = destination;
	flight->TimeFlight - timeFlight;
	return flight;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = new Flight();
	copiedFlight->Departure = flight.Departure;
	copiedFlight->Destination = flight.Destination;
	copiedFlight->TimeFlight = flight.TimeFlight;
	return copiedFlight;
}