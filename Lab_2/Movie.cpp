#include <iostream>
#include "Function.h"

using namespace std;

void DemoMovie()
{
	Movie movie;
	Movie* firstPointer = &movie;
	cout << "Enter title movie:" << endl;
	cin >> firstPointer->Title;
	cout << "Enter duration movie:" << endl;
	cin >> firstPointer->Duration;
	cout << "Enter year movie:" << endl;
	cin >> firstPointer->Year;
	cout << "Enter genre movie:" << endl;
	//cin >> firstPointer->Genre;
	cout << "Enter raiting movie:" << endl;
	cin >> firstPointer->Raiting;
	cout << endl;

	cout << "Title movie: " << firstPointer->Title << endl
		<< "Duration: " << firstPointer->Duration << endl
		<< "Year: " << firstPointer->Year << endl
		//<< "Genre: " << firstPointer->Genre << endl
		<< "Raiting: " << firstPointer->Raiting << endl << endl;

	Movie* secondPointer = &movie;
	cout << "Address first figure: " << firstPointer << endl
		<< "Address second figure: " << secondPointer << endl << endl;
}

void DemoMovieWithGenre()
{
	Movie* movie = new Movie;
	movie->Title = "1+1";
	movie->Genre = Comedy;
	movie->Year = 2012;
	movie->Duration = 113;
	movie->Raiting = 8.8;
	delete movie;

	Movie* movie1 = MakeMovie("1+1", Comedy, 2012, 113, 8.8);
	delete movie1;

	Movie* movies = new Movie[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			movies[i].Title = "1+1";
			movies[i].Genre = Comedy;
			movies[i].Year = 2012;
			movies[i].Duration = 113;
			movies[i].Raiting = 8.8;
		}
		else
		{
			movies[i].Title = "The Shawshank Redemption";
			movies[i].Genre = Drama;
			movies[i].Year = 1994;
			movies[i].Duration = 1423;
			movies[i].Raiting = 9.1;
		}
	}


	cout << CountMoviesByGenre(movies, 10, Thriller) << endl;

	movies[3].Title = "Tenet";
	movies[3].Genre = Thriller;
	movies[3].Duration = 150;
	movies[3].Raiting = 7.9;
	movies[3].Year = 2020;

	Movie* bestMovie = FindBestGenreMovie(movies, 10, Thriller);
	WriteMovie(bestMovie);

	delete bestMovie;
	delete[] movies;
}

int CountMoviesByGenre(Movie* movies, int count, Genre findGenre)
{
	int genreCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findGenre)
		{
			genreCount++;
		}
	}
	return genreCount;
}

Movie* FindBestGenreMovie(Movie* movies, int count, Genre findGenre)
{
	double maxRate = -1.0;
	int indexRate = -1;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findGenre)
		{
			if (movies[i].Raiting > maxRate)
			{
				maxRate = movies[i].Raiting;
				indexRate = i;
			}
		}
	}
	if (indexRate == -1)
	{
		return nullptr;
	}
	else
	{
		return &movies[indexRate];
	}
}

void WriteMovie(Movie* movie)
{
	cout << "Title movie: " << movie->Title << endl
		<< "Genre: " << movie->Genre << endl
		<< "Duration: " << movie->Duration << endl
		<< "Year: " << movie->Year << endl
		<< "Raiting: " << movie->Raiting << endl << endl;
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