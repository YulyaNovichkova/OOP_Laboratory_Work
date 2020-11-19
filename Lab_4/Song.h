#pragma once
#include <iostream>
#include "Genre.h"

using namespace std;

class Song
{
private:
	string _title;
	int _duration;
	Genre _genre;

public:
	void SetSongTitle(string title);
	void SetDuration(int duration);
	void SetGenre(Genre genre);

	string GetTitle();
	int GetDuration();
	Genre GetGenre();

	Song(string title, int duration, Genre genre);
	Song();
};

void WriteSong(Song* song);
