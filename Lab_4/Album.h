#pragma once
#include "Song.h"

class Album
{
private:
	string _title;
	int _year;
	Song* _songs;
	//TODO: порядок слов
	int _countSongs;

public:
	void SetAlbumTitle(string title);
	void SetAlbumYear(int year);
	//TODO: мн. число, порядок слов
	void SetAlbumSong(Song* song, int countSongs);

	string GetAlbumTitle();
	int GetAlbumYear();
	//TODO: мн. число
	Song* GetSong();
	//TODO: порядок слов
	int GetCountSongs();

	//TODO: мн. число, порядок слов
	Album(string title, int year, Song* song, int countSongs);
	Album();
};

void WriteAlbum(Album* album);