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
void Album::SetAlbumSongs(Song* song, int songsСount)
{
	this->_songs = song;

	if (songsСount < 0)
	{
		throw exception("The number of songs should be positive.");
	}
	this->_songsСount = songsСount;
}

string Album::GetAlbumTitle()
{
	return this->_title;
}
int Album::GetAlbumYear()
{
	return this->_year;
}
Song* Album::GetSongs()
{
	return this->_songs;
}
int Album::GetSongsCount()
{
	return this->_songsСount;
}

Album::Album(string title, int year, Song* song, int songsСount)
{
	this->SetAlbumTitle(title);
	this->SetAlbumYear(year);
	this->SetAlbumSongs(song, songsСount);
}

Album::Album()
{
	this->_title = "";
	this->_year = 0;
	this->_songs = nullptr;
	this->_songsСount = 0;
}

void WriteAlbum(Album* album)
{
	cout << endl << "Album: " << album->GetAlbumTitle() << "   "
		<< "Year of issue: " << album->GetAlbumYear() << endl
		<< "Songs:" << endl;
	for (int i = 0; i < album->GetSongsCount(); i++)
	{
		Song* tempSong = album->GetSongs();
		WriteSong(&tempSong[i]);
	}
	cout << endl;
}