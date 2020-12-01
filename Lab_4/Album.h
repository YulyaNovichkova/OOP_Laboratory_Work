#pragma once
#include "Song.h"

class Album
{
private:
	string _title;
	int _year;
	Song* _songs;
	//TODO: ������� ����
	int _countSongs;

public:
	void SetAlbumTitle(string title);
	void SetAlbumYear(int year);
	//TODO: ��. �����, ������� ����
	void SetAlbumSong(Song* song, int countSongs);

	string GetAlbumTitle();
	int GetAlbumYear();
	//TODO: ��. �����
	Song* GetSong();
	//TODO: ������� ����
	int GetCountSongs();

	//TODO: ��. �����, ������� ����
	Album(string title, int year, Song* song, int countSongs);
	Album();
};

void WriteAlbum(Album* album);