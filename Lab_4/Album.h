#pragma once
#include "Song.h"

class Album
{
private:
	string _title;
	int _year;
	Song* _songs;
	//TODO: ïîðÿäîê ñëîâ //+
	int _songsСount;

public:
	void SetAlbumTitle(string title);
	void SetAlbumYear(int year);
	//TODO: ìí. ÷èñëî, ïîðÿäîê ñëîâ //+
	void SetAlbumSongs(Song* song, int songsСount);

	string GetAlbumTitle();
	int GetAlbumYear();
	//TODO: ìí. ÷èñëî //+
	Song* GetSongs();
	//TODO: ïîðÿäîê ñëîâ //+
	int GetSongsCount();

	//TODO: ìí. ÷èñëî, ïîðÿäîê ñëîâ //+
	Album(string title, int year, Song* song, int songsСount);
	Album();
};

void WriteAlbum(Album* album);