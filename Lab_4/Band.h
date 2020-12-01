#pragma once
#include "Album.h"

class Band
{
private:
	string _title;
	string _description;
	Album* _albums;
	//TODO: наоборот, _albumsCount
	int _countAlbums;

public:
	void SetTitleBand(string title);
	void SetDescriptionBand(string description);
	//TODO: мн. число, порядок слов
	void SetAlbum(Album* album, int countAlbums);

	string GetTitleBand();
	string GetDescriptionBand();
	Album* GetAlbums();
	//TODO: порядок слов
	int GetCountAlbums();

	Band(string title, string description, Album* albums, int countAlbums);
	Band();

	Song* FindSong(string songTitle);
	Album* FindAlbum(Song* song);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
};

void DemoBand();
void WriteAllSongs(Song* allSongs, int allSongsCount);