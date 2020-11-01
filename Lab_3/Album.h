#pragma once
#include "Song.h"

class Album
{
private:
	string _title;
	int _year;
	Song* _songs;
	int _countSongs;

public:
	void SetAlbumTitle(string title);
	void SetAlbumYear(int year);
	void SetAlbumSong(Song* song);
	void SetCountSongs(int countSongs);

	string GetAlbumTitle();
	int GetAlbumYear();
	Song* GetSong();
	int GetCountSongs();

	Album(string title, int year, Song* song, int countSongs);
	Album();
};

void WriteAlbum(Album* album);