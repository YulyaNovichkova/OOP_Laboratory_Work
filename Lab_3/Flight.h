#pragma once
#include "Time.h"

class Flight
{
private:
	int _number;
	string _departure;
	string _arrival;
	Time _timeDeparture;
	Time _timeArrival;

public:
	void SetNumber(int number);
	void SetDeparture(string departure);
	void SetArrival(string arrival);
	void SetTimeDeparture(int year, int month, int day,	int hour, int minute);
	void SetTimeArrival(int year, int month, int day, int houe, int minute);

	int GetNumber();
	string GetDeparture();
	string GetArrival();
	Time GetTimeDeparture();
	Time GetTimeArrival();

	Flight(int number, string departure, string arrival,
		int yearDeparture, int monthDeparture, int dayDeparture,
		int hourDeparture, int minuteDeparture, int yearArrival,
		int monthArrival, int dayArrival, int hourArrival, int minuteArrival);
	Flight();
};

void DemoFlightWithTime();
int GetTimeFlightMinuts(Flight& flight);