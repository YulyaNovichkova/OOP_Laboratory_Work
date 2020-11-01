#include "Time.h"

void Time::SetYear(int year)
{
	if (year < 0)
	{
		throw exception("The year must be positive.");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if (month < 0 || month > 12)
	{
		throw exception("The number of months must be between 0 and 12.");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if (day < 0 || day > 30)
	{
		throw exception("The number of days must be between 0 and 30.");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if (hour < 0 || hour > 23)
	{
		throw exception("The hour must be between 0 and 23.");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if (minute < 0 || minute > 59)
	{
		throw exception("Minutes must be between 0 and 59.");
	}
	this->_minute = minute;
}

int Time::GetYear()
{
	return this->_year;
}

int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay()
{
	return this->_day;
}

int Time::GetHour()
{
	return this->_hour;
}

int Time::GetMinute()
{
	return this->_minute;
}

Time::Time(int year, int month, int day, int hour, int minute)
{
	this->SetYear(year);
	this->SetMonth(month);
	this->SetDay(day);
	this->SetHour(hour);
	this->SetMinute(minute);
}

Time::Time()
{
	this->SetYear(0);
	this->SetMonth(0);
	this->SetDay(0);
	this->SetHour(0);
	this->SetMinute(0);
}