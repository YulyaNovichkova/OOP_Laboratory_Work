#include <iostream>
#include "Function.h"

using namespace std;

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

Time* MakeTime(int hours, int minuts, int seconds)
{
	Time* clock = new Time();
	clock->Hours = hours;
	clock->Minuts = minuts;
	clock->Seconds = seconds;
	return clock;
}

Time* CopyTime(Time& clock)
{
	Time* copiedClock = new Time();
	copiedClock->Hours = clock.Hours;
	copiedClock->Minuts = clock.Minuts;
	copiedClock->Seconds = clock.Seconds;
	return copiedClock;
}