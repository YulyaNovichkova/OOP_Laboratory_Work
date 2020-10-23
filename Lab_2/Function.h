#pragma once
#include "Structure.h"
#include "Enumeration.h"

void Sort(double*, int);
void DemoSort();
void ShowArray(double*, int);
void DemoRectangle();
void DemoFlight();
void DemoMovie();
void DemoTime();
void WrongPointers();
void WriteRectangle(Rectangle&);
void ReadRectangle(Rectangle&);
void DemoReadAndWriteRectangles();
void Exchange(Rectangle&, Rectangle&);
void FindRectangle(Rectangle*, int);
void FindMaxRectangle(Rectangle*, int);
void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(Flight*, int);
Circle* MakeCircle(double, double, double, string);
Circle* CopyCircle(Circle&);
void DemoCircle();
Rectangle* MakeRectangle(int, int, string);
Rectangle* CopyRectangle(Rectangle&);
Flight* MakeFlight(string, string, int);
Flight* CopyFlight(Flight&);
Movie* MakeMovie(string, Genre, int, int, double);
Movie* CopyMovie(Movie&);
Time* MakeTime(int, int, int);
Time* CopyTime(Time&);
void DemoEnums();
void WriteColor(Color);
Color ReadColor();
int CountRed(Color*, int);
int CountColor(Color*, int, Color);
void DemoMovieWithGenre();
int CountMoviesByGenre(Movie*, int, Genre);
Movie* FindBestGenreMovie(Movie*, int, Genre);
void WriteMovie(Movie*);