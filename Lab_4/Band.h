#pragma once
#include "Album.h"

class Band
{
private:
	string _title;
	string _description;
	Album* _albums;
	//TODO: ��������, _albumsCount //+
	int _albumsCount;

public:
	void SetTitleBand(string title);
	void SetDescriptionBand(string description);
	//TODO: ��. �����, ������� ���� //+
	void SetAlbums(Album* album, int albumsCount);

	string GetTitleBand();
	string GetDescriptionBand();
	Album* GetAlbums();
	//TODO: ������� ���� //+
	int GetAlbumsCount();

	Band(string title, string description, Album* albums, int albumsCount);
	Band();

	Song* FindSong(string songTitle);
	Album* FindAlbum(Song* song);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
};

void DemoBand();
void WriteAllSongs(Song* allSongs, int allSongsCount);