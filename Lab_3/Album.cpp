#include "Album.h"

void Album::SetAlbumTitle(string title)
{
	this->_title = title;
}
void Album::SetAlbumYear(int year)
{
	if (year < 0)
	{
		throw exception("The year must be positive.");
	}
	this->_year = year;
}
void Album::SetAlbumSong(Song* song)
{
	this->_songs = song;
}
void Album::SetCountSongs(int countSongs)
{
	if (countSongs < 0)
	{
		throw exception("The number of songs should be positive.");
	}
	this->_countSongs = countSongs;
}

string Album::GetAlbumTitle()
{
	return this->_title;
}
int Album::GetAlbumYear()
{
	return this->_year;
}
Song* Album::GetSong()
{
	return this->_songs;
}
int Album::GetCountSongs()
{
	return this->_countSongs;
}

Album::Album(string title, int year, Song* song, int countSongs)
{
	this->SetAlbumTitle(title);
	this->SetAlbumYear(year);
	this->SetAlbumSong(song);
	this->SetCountSongs(countSongs);
}
Album::Album()
{
	this->_title = "";
	this->_year = 0;
	this->_songs = nullptr;
	this->_countSongs = 0;
}

void WriteAlbum(Album* album)
{
	cout << endl << "Album: " << album->GetAlbumTitle() << "   "
		<< "Year of issue: " << album->GetAlbumYear() << endl
		<< "Songs:" << endl;
	for (int i = 0; i < album->GetCountSongs(); i++)
	{
		Song* tempSong = album->GetSong();
		WriteSong(&tempSong[i]);
	}
	cout << endl;
}