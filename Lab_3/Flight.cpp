#include "Flight.h"

void Flight::SetNumber(int number)
{
	if (number < 0)
	{
		throw exception("The flight number must be positive.");
	}
	this->_number = number;
}

void Flight::SetDeparture(string departure)
{
	this->_departure = departure;
}

void Flight::SetArrival(string arrival)
{
	this->_arrival = arrival;
}

void Flight::SetTimeDeparture(int year, int month, int day, int hour, int minute)
{
	this->_timeDeparture = Time(year, month, day, hour, minute);
}

void Flight::SetTimeArrival(int year, int month, int day, int hour, int minute)
{
	bool isLess = true;

	if (year > this->GetTimeArrival().GetYear())
	{
		isLess = false;
	}
	if (year < this->_timeDeparture.GetYear())
	{
		throw exception("The year of arrival cannot be less than the year of departure.");
	}
	if (isLess)
	{
		if (month > this->_timeDeparture.GetMonth())
		{
			isLess = false;
		}
		if (month < this->_timeDeparture.GetMonth())
		{
			throw exception("The month of arrival cannot be less than the month of departure.");
		}
		if (isLess)
		{
			if (day > this->_timeDeparture.GetDay())
			{
				isLess = false;
			}
			if (day < this->_timeDeparture.GetDay())
			{
				throw exception("The day of arrival cannot be less than the day of departure.");
			}
			if (isLess)
			{
				if (hour > this->_timeDeparture.GetHour())
				{
					isLess = false;
				}
				if (hour < this->_timeDeparture.GetHour())
				{
					throw exception("The hour of arrival cannot be less than the hour of departure.");
				}
				if (isLess)
				{
					if (minute > this->_timeDeparture.GetMinute())
					{
						isLess = false;
					}
					if (minute < this->_timeDeparture.GetMinute())
					{
						throw exception("The minute of arrival cannot be less than the minute of departure.");
					}
					if (minute == this->_timeDeparture.GetMinute())
					{
						throw exception("The arrival time is equal to the departure time.");
					}
				}
			}
		}
	}
	if (!isLess)
	{
		this->_timeArrival = Time(year, month, day, hour, minute);
	}
	else
	{
		throw exception("An error occurred while adding the send time.");
	}
}

int Flight::GetNumber()
{
	return this->_number;
}

string Flight::GetDeparture()
{
	return this->_departure;
}

Time Flight::GetTimeDeparture()
{
	return this->_timeDeparture;
}

string Flight::GetArrival()
{
	return this->_arrival;
}

Time Flight::GetTimeArrival()
{
	return this->_timeArrival;
}

Flight::Flight(int number, string departure, string arrival,
	int yearDeparture, int monthDeparture, int dayDeparture,
	int hourDeparture, int minuteDeparture, int yearArrival,
	int monthArrival, int dayArrival, int hourArrival, int minuteArrival)
{
	this->SetNumber(number);
	this->SetDeparture(departure);
	this->SetArrival(arrival);
	this->SetTimeDeparture(yearDeparture, monthDeparture, dayDeparture, hourDeparture, minuteDeparture);
	this->SetTimeArrival(yearArrival, monthArrival, dayArrival,	hourArrival, minuteArrival);
}

Flight::Flight()
{
	this->_number = 0;
	this->_departure = "";
	this->_arrival = "";
	this->_timeDeparture = Time();
	this->_timeArrival = Time();
}

void DemoFlightWithTime()
{
	const int count = 5;
	Flight* flight = new Flight[count];

	flight[0] = Flight(0001, "Moscow", "Khabarovsk", 2020, 6, 6, 4, 15, 2020, 7, 3, 14, 30);
	flight[1] = Flight(0002, "Warsaw", "Paris", 2018, 3, 23, 15, 28, 2019, 12, 12, 16, 48);
	flight[2] = Flight(0003, "Tomsk", "Tokyo", 2020, 2, 7, 2, 48, 2020, 2, 8, 13, 30);
	flight[3] = Flight(0004, "Tokyo", "Moscow", 2019, 10, 20, 20, 48, 2020, 2, 16, 17, 0);
	flight[4] = Flight(0005, "Tomsk", "Warsaw", 2019, 7, 5, 1, 13, 2019, 7, 5, 15, 20);

	for (int i = 0; i < count; i++)
	{
		cout << endl<< flight[i].GetNumber() << " "
			<< flight[i].GetDeparture() << "-"
			<< flight[i].GetArrival() << "\t"
			<< "Departure: " << flight[i].GetTimeDeparture().GetDay() << "."
			<< flight[i].GetTimeDeparture().GetMonth() << "."
			<< flight[i].GetTimeDeparture().GetYear() << " "
			<< flight[i].GetTimeDeparture().GetHour() << ":"
			<< flight[i].GetTimeDeparture().GetMinute() << "\t"
			<< "Arrival: " << flight[i].GetTimeArrival().GetDay() << "."
			<< flight[i].GetTimeArrival().GetMonth() << "."
			<< flight[i].GetTimeArrival().GetYear() << " "
			<< flight[i].GetTimeArrival().GetHour() << ":"
			<< flight[i].GetTimeArrival().GetMinute() << endl;
		GetTimeFlightMinuts(flight[i]);
	}

	delete[] flight;
}

int GetTimeFlightMinuts(Flight& flight)
{
	int tempMinute = flight.GetTimeArrival().GetMinute();
	int tempHour = flight.GetTimeArrival().GetHour();
	int tempDay = flight.GetTimeArrival().GetDay();
	int tempMonth = flight.GetTimeArrival().GetMonth();
	int tempYear = flight.GetTimeArrival().GetYear();

	tempMinute -= flight.GetTimeDeparture().GetMinute();
	if (tempMinute < 0)
	{
		tempMinute += 60;
		tempHour--;
	}

	tempHour -= flight.GetTimeDeparture().GetHour();
	if (tempHour < 0)
	{
		tempHour += 24;
		tempDay--;
	}

	tempDay -= flight.GetTimeDeparture().GetDay();
	if (tempDay < 0)
	{
		tempDay += 30;
		tempMonth--;
	}

	tempMonth -= flight.GetTimeDeparture().GetMonth();
	if (tempMonth < 0)
	{
		tempMonth += 12;
		tempYear--;
	}

	tempYear -= flight.GetTimeDeparture().GetYear();
	if (tempYear < 0)
	{
		throw exception("The year must be positive.");
	}

	cout << flight.GetNumber() << " "
		<< flight.GetDeparture() << "-"
		<< flight.GetArrival() << "\t"
		<< "Flight time: ";

	if (tempYear > 0)
	{
		cout << tempYear << " year ";
	}
	if (tempMonth > 0)
	{
		cout << tempMonth << " month ";
	}
	if (tempDay > 0)
	{
		cout << tempDay << " day ";
	}
	if (tempHour > 0)
	{
		cout << tempHour << " hour ";
	}
	if (tempMinute > 0)
	{
		cout << tempMinute << " minute." << endl;
	}
	else
	{
		throw exception("The minute must be positive.");
	}
}