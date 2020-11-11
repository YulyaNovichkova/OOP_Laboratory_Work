#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Route
{
	int Number;
	int Duration;
	int Frequency;
	string* StopTitle;
	int CountStop;
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);
int FindRouteTo(Route* route, int countRoute, string stopTitle);
void SetRouteNumber(Route& route, int routeNumber);
void SetRouteDuration(Route& route, int routeDuration);
void SetRouteFrequency(Route& route, int routeFrequency);
void SetCountStop(Route& route, int countStop);