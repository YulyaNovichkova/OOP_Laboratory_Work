#pragma once
#include <iostream>
#include <string>

using namespace std;

// Структура Прямоугольник 
struct Rectangle
{
	double Length;
	double Width;
	string Color;
};

// Структура Рейс
struct Flight
{
	string Departure;
	string Destination;
	int TimeFlight;
};

// Структура Фильм
struct Movie
{
	string Title;
	int Duration;
	int Year;
	string Genre;
	double Raiting;
};

// Структура Время
struct Time
{
	int Hours;
	int Minuts;
	int Seconds;
};

// Структура Контакт
struct Contact
{
	string Name;
	string Surname;
	string Number;
};

//Структура Песня
struct Song
{
	string Title;
	string Album;
	string Artist;
	double Raiting;
};

// Структура Дисциплина
struct Discipline
{
	string Title;
	int Hours;
	int Assessment;
};

// Структура Круг 
struct Circle
{    
	double X;            // X-координата центра круга    
	double Y;            // Y-координата центра круга    
	double Radius;       // Радиус    
	string Color;        // Цвет 
}; 