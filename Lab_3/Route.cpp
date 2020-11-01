#include <iostream>
#include "Route.h"

void DemoRoute()
{
	string stopTitle;
	int routeFound;
	int routeCount;

	cout << "Enter the number of routes: ";
	cin >> routeCount;
	cin.ignore();
	Route* route = new Route[routeCount];

	for (int i = 0; i < routeCount; i++)
	{
		ReadRouteFromConsole(route[i]);
	}
	for (int i = 0; i < routeCount; i++)
	{
		WriteRouteToConsole(route[i]);
	}

	cout << endl << "Enter the name of the stop to search: ";
	getline(cin, stopTitle);

	routeFound = FindRouteTo(route, routeCount, stopTitle);
	if (routeFound == -1)
	{
		cout << "No route with such a stop." << endl;
	}
	else
	{
		cout << "Stopping from route: ";
		WriteRouteToConsole(route[routeFound]);
	}

	delete[] route->StopTitle;
	delete[] route;
}

void ReadRouteFromConsole(Route& route)
{
	int routeNumber;
	int routeDuration;
	int routeFrequency;
	int stopCount;

	cout << endl << "Enter route number: ";
	cin >> routeNumber;
	SetRouteNumber(route, routeNumber);

	cout << "Enter the average route duration in minutes: ";
	cin >> routeDuration;
	SetRouteDuration(route, routeDuration);

	cout << "Enter the frequency of the route in minutes: ";
	cin >> routeFrequency;
	SetRouteFrequency(route, routeFrequency);

	cout << "Enter the number of stops: ";
	cin >> stopCount;
	SetStopCount(route, stopCount);
	route.StopTitle = new string[route.StopCount];
	cin.ignore();

	for (int i = 0; i < route.StopCount; i++)
	{
		cout << "Enter stop #" << i + 1 << endl;
		getline(cin, route.StopTitle[i]);
	}
}

void WriteRouteToConsole(Route& route) 
{
	cout << endl << "Route # " << route.Number
	<< " en way " << route.Duration << " minutes"
	<< " with a frequency of " << route.Frequency << " minutes." << endl;
	cout << "The route passes through stops: ";

	for (int i = 0; i < route.StopCount; i++)
	{
		cout << route.StopTitle[i];
		if (i == route.StopCount - 1)
		{
			cout << ". ";
		}
		else
		{
			cout << ", ";
		}
	}
	cout << endl;
}

int FindRouteTo(Route* route, int routeCount, string stopTitle)
{
	for (int i = 0; i < routeCount; i++)
	{
		if (route->StopTitle[i] == stopTitle)
		{
			return i;
		}
	}
	return -1;
}

void SetRouteNumber(Route& route, int routeNumber) 
{
	if (routeNumber < 0)
	{
		throw exception("The route number must be positive.");
	}
	route.Number = routeNumber;
}

void SetRouteDuration(Route& route, int routeDuration)
{
	if (routeDuration < 0)
	{
		throw exception("The duration of the route must be positive.");
	}
	route.Duration = routeDuration;
}

void SetRouteFrequency(Route& route, int routeFrequency)
{
	if (routeFrequency < 0)
	{
		throw exception("The route frequency must be positive.");
	}
	route.Frequency = routeFrequency;
}

void SetStopCount(Route& route, int stopCount)
{
	if (stopCount < 0)
	{
		throw exception("The number of stops must be positive.");
	}
	route.StopCount = stopCount;
}