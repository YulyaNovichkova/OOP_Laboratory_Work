#include "Song.h"

void Song::SetSongTitle(string title)
{
	this->_title = title;
}

void Song::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw exception("The length of the song should be positive.");
	}
	this->_duration = duration;
}

void Song::SetGenre(Genre genre)
{
	this->_genre = genre;
}

string Song::GetTitle()
{
	return this->_title;
}

int Song::GetDuration()
{
	return this->_duration;
}

Genre Song::GetGenre()
{
	return this->_genre;
}

Song::Song(string title, int duration, Genre genre)
{
	this->SetSongTitle(title);
	this->SetDuration(duration);
	this->SetGenre(genre);
}

Song::Song()
{
	this->_title = "Noname";
	this->_duration = 0;
	this->_genre = Rock;
}

void WriteSong(Song* song)
{
	cout << "Title: " << song->GetTitle() << "   "
		<< "Duration: " << song->GetDuration() << "   "
		<< "Genre: ";
	switch (song->GetGenre())
	{
	case Classical:
	{
		cout << "Classical";
		break;
	}
	case Jazz:
	{
		cout << "Jazz";
		break;
	}
	case Rock:
	{
		cout << "Rock";
		break;
	}
	case Rap:
	{
		cout << "Rap";
		break;
	}
	case Pop:
	{
		cout << "Pop";
		break;
	}
	case Country:
	{
		cout << "Country";
		break;
	}
	case Electronic:
	{
		cout << "Electronic";
		break;
	}
	case Disco:
	{
		cout << "Disco";
		break;
	}
	case Blues:
	{
		cout << "Blues";
		break;
	}
	}
	cout << endl;
}