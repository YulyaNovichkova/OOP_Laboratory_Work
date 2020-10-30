#include <iostream>
#include "Function.h"

using namespace std;

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");

	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);
	//TODO: только не забываем освобождать память созданных объектов. Если объект создан через new, для него должен быть delete
}

Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* circle = new Circle();
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copiedCircle = new Circle();
	copiedCircle->X = circle.X;
	copiedCircle->Y = circle.Y;
	copiedCircle->Radius = circle.Radius;
	copiedCircle->Color = circle.Color;
	return copiedCircle;
}
//TODO: эти методы, наверно, правильнее было бы скопировать в собственные cpp-файлы, раз они всё равно созданы
Rectangle* MakeRectangle(int lenght, int width, string color)
{
	Rectangle* rectangle = new Rectangle();
	rectangle->Length = lenght;
	rectangle->Width = width;
	rectangle->Color = color;
	return rectangle;
}

Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copiedRectangle = new Rectangle();
	copiedRectangle->Length = rectangle.Length;
	copiedRectangle->Width = rectangle.Width;
	copiedRectangle->Color = rectangle.Color;
	return copiedRectangle;
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

Movie* MakeMovie(string title, Genre genre, int year, int duration, double raiting)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->Genre = genre;
	movie->Year = year;
	movie->Raiting = raiting;
	movie->Duration = duration;
	return movie;
}

Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie = new Movie();
	copiedMovie->Title = movie.Title;
	copiedMovie->Genre = movie.Genre;
	copiedMovie->Year = movie.Year;
	copiedMovie->Raiting = movie.Raiting;
	copiedMovie->Duration = movie.Duration;
	return copiedMovie;
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