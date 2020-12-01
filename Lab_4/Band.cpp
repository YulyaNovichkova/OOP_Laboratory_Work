#include "Band.h"

void Band::SetTitleBand(string title)
{
	this->_title = title;
}

void Band::SetDescriptionBand(string description)
{
	this->_description = description;
}

void Band::SetAlbums(Album* albums, int countAlbums)
{
	this->_albums = albums;

	if (countAlbums < 0)
	{
		throw exception("The number of albums should be positive.");
	}
	this->_albumsCount = countAlbums;
}

string Band::GetTitleBand()
{
	return this->_description;
}

string Band::GetDescriptionBand()
{
	return this->_description;
}

Album* Band::GetAlbums()
{
	return this->_albums;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}

Band::Band(string title, string description, Album* albums, int countAlbums)
{
	this->SetTitleBand(title);
	this->SetDescriptionBand(description);
	this->SetAlbums(albums, countAlbums);
}

Band::Band()
{
	this->_title = "";
	this->_description = "";
	this->_albums = nullptr;
	this->_albumsCount = 0;
}

Song* Band::FindSong(string songTitle)
{
	Album* tempAlbum = this->GetAlbums();
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSongs();
		for (int j = 0; j < tempAlbum[i].GetSongsCount(); j++)
		{
			if (tempSong[j].GetTitle() == songTitle)
			{
				return &tempSong[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	Album* tempAlbums = this->GetAlbums();
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Song* tempSong = tempAlbums[i].GetSongs();
		for (int j = 0; j < tempAlbums[i].GetSongsCount(); j++)
		{
			if (&tempSong[j] == song)
			{
				return &tempAlbums[i];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	Album* tempAlbum = this->GetAlbums();
	for (int count = 0; count < this->GetAlbumsCount(); count++)
	{
		allSongsCount += tempAlbum[count].GetSongsCount();
	}

	Song* allSongs = new Song[allSongsCount];
	int count = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSongs();
		for (int j = 0; j < tempAlbum[i].GetSongsCount(); j++)
		{
			allSongs[count] = tempSong[j];
			count++;
		}
	}
	return allSongs;
}

Song* Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	Album* tempAlbum = this->GetAlbums();
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSongs();
		for (int j = 0; j < tempAlbum[i].GetSongsCount(); j++)
		{
			if (tempSong[j].GetGenre() == findingGenre)
			{
				allSongsCount++;
			}
		}
	}

	Song* allGenreSongs = new Song[allSongsCount];
	int count = 0;
	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSongs();
		for (int j = 0; j < tempAlbum[i].GetSongsCount(); j++)
		{
			if (tempSong[j].GetGenre() == findingGenre)
			{
				allGenreSongs[count] = tempSong[j];
				count++;
			}
			if (count == allSongsCount)
			{
				break;
			}
		}
	}
	return allGenreSongs;
}

void DemoBand()
{
	const int COUNT_SONGS = 5;
	const int COUNT_ALBUMS = 3;
	Song* songs1 = new Song[COUNT_SONGS];
	songs1[0] = Song("Fly Me To The Moon", 180, Jazz);
	songs1[1] = Song("But Not For Me", 145, Jazz);
	songs1[2] = Song("In A Sentimental Mood", 183, Jazz);
	songs1[3] = Song("Misty", 194, Jazz);
	songs1[4] = Song("Summertime", 162, Jazz);

	Song* songs2 = new Song[COUNT_SONGS];
	songs2[0] = Song("Rondo", 279, Classical);
	songs2[1] = Song("Andante Con Moto", 236, Classical);
	songs2[2] = Song("Allegro", 240, Classical);
	songs2[3] = Song("Presto", 199, Classical);
	songs2[4] = Song("Adagio Sostenuto", 184, Classical);

	Song* songs3 = new Song[COUNT_SONGS];
	songs3[0] = Song("Can You Feel My Heart", 135, Rock);
	songs3[1] = Song("Medicine", 210, Rock);
	songs3[2] = Song("Sleepwalking", 120, Rock);
	songs3[3] = Song("Blasphemy", 156, Rock);
	songs3[4] = Song("Throne", 150, Rock);

	Album* albums = new Album[COUNT_ALBUMS];
	albums[0] = Album("Old - old jazz", 2019, songs1, COUNT_SONGS);
	albums[1] = Album("My favorite classic", 1745, songs2, COUNT_SONGS);
	albums[2] = Album("That’s the Spirit", 2007, songs3, COUNT_SONGS);

	Band* band = new Band("Amatory", "metal band", albums, COUNT_ALBUMS);
	Album* findedAlbum = band->FindAlbum(&songs2[1]);
	Song* findedSong = band->FindSong("Medicine");

	if (findedSong == nullptr)
	{
		cout << "There is no such song." << endl;
	}
	else
	{
		WriteSong(findedSong);
	}

	if (findedAlbum == nullptr)
	{
		cout << "There is no such album.";
	}
	else
	{
		WriteAlbum(findedAlbum);
	}

	int allSongsCount = 0;
	Song* allSongs = band->GetAllSongs(allSongsCount);
	WriteAllSongs(allSongs, allSongsCount);

	int allGenreSongCount = 0;
	Song* allGenreSong = band->GetAllGenreSongs(Rock, allGenreSongCount);
	WriteAllSongs(allGenreSong, allGenreSongCount);

	delete[] songs1;
	delete[] songs2;
	delete[] songs3;
	delete[] albums;
	delete band;
	delete[] allSongs;
	delete[] allGenreSong;
}

void WriteAllSongs(Song* allSongs, int allSongsCount)
{
	cout << "All songs:" << endl;
	for (int i = 0; i < allSongsCount; i++)
	{
		WriteSong(&allSongs[i]);
	}
	cout << endl;
}