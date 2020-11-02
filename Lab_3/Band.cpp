#include "Band.h"

void Band::SetTitleBand(string title)
{
	this->_title = title;
}

void Band::SetDescriptionBand(string description)
{
	this->_description = description;
}

void Band::SetAlbum(Album* albums)
{
	this->_albums = albums;
}

void Band::SetCountAlbums(int countAlbums)
{
	if (countAlbums < 0)
	{
		throw exception("The number of albums should be positive.");
	}
	this->_countAlbums = countAlbums;
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

int Band::GetCountAlbums()
{
	return this->_countAlbums;
}

Band::Band(string title, string description, Album* albums, int countAlbums)
{
	this->SetTitleBand(title);
	this->SetDescriptionBand(description);
	this->SetAlbum(albums);
	this->SetCountAlbums(countAlbums);
}

Band::Band()
{
	this->_title = "";
	this->_description = "";
	this->_albums = nullptr;
	this->_countAlbums = 0;
}

Song* Band::FindSong(string songTitle)
{
	Album* tempAlbum = this->GetAlbums();
	for (int i = 0; i < this->GetCountAlbums(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSong();
		for (int j = 0; j < tempAlbum[i].GetCountSongs(); j++)
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
	for (int i = 0; i < this->GetCountAlbums(); i++)
	{
		Song* tempSong = tempAlbums[i].GetSong();
		for (int j = 0; j < tempAlbums[i].GetCountSongs(); j++)
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
	for (int count = 0; count < this->GetCountAlbums(); count++)
	{
		allSongsCount += tempAlbum[count].GetCountSongs();
	}

	Song* allSongs = new Song[allSongsCount];
	int count = 0;
	for (int i = 0; i < this->GetCountAlbums(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSong();
		for (int j = 0; j < tempAlbum[i].GetCountSongs(); j++)
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
	for (int i = 0; i < this->GetCountAlbums(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSong();
		for (int j = 0; j < tempAlbum[i].GetCountSongs(); j++)
		{
			if (tempSong[j].GetGenre() == findingGenre)
			{
				allSongsCount++;
			}
		}
	}

	Song* allGenreSongs = new Song[allSongsCount];
	int count = 0;
	for (int i = 0; i < this->GetCountAlbums(); i++)
	{
		Song* tempSong = tempAlbum[i].GetSong();
		for (int j = 0; j < tempAlbum[i].GetCountSongs(); j++)
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
	const int coutnSongs = 5;
	const int coutnAlbums = 3;
	Song* songs1 = new Song[coutnSongs];
	songs1[0] = Song("Fly Me To The Moon", 180, Jazz);
	songs1[1] = Song("But Not For Me", 145, Jazz);
	songs1[2] = Song("In A Sentimental Mood", 183, Jazz);
	songs1[3] = Song("Misty", 194, Jazz);
	songs1[4] = Song("Summertime", 162, Jazz);

	Song* songs2 = new Song[coutnSongs];
	songs2[0] = Song("Rondo", 279, Classical);
	songs2[1] = Song("Andante Con Moto", 236, Classical);
	songs2[2] = Song("Allegro", 240, Classical);
	songs2[3] = Song("Presto", 199, Classical);
	songs2[4] = Song("Adagio Sostenuto", 184, Classical);

	Song* songs3 = new Song[coutnSongs];
	songs3[0] = Song("Can You Feel My Heart", 135, Rock);
	songs3[1] = Song("Medicine", 210, Rock);
	songs3[2] = Song("Sleepwalking", 120, Rock);
	songs3[3] = Song("Blasphemy", 156, Rock);
	songs3[4] = Song("Throne", 150, Rock);

	Album* albums = new Album[coutnAlbums];
	albums[0] = Album("Old - old jazz", 2019, songs1, coutnSongs);
	albums[1] = Album("My favorite classic", 1745, songs2, coutnSongs);
	albums[2] = Album("That’s the Spirit", 2007, songs3, coutnSongs);

	Band* band = new Band("Amatory", "metal band", albums, coutnAlbums);
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

	int allSongCount = 0;
	Song* allSong = band->GetAllSongs(allSongCount);
	WriteAllSongs(allSong, allSongCount);

	int allGenreSongCount = 0;
	Song* allGenreSong = band->GetAllGenreSongs(Rock, allGenreSongCount);
	WriteAllSongs(allGenreSong, allGenreSongCount);

	delete band;
	delete[] albums;
	delete[] songs1;
	delete[] songs2;
	delete[] songs3;
}

void WriteAllSongs(Song* allSongs, int allSongCount)
{
	cout << "All songs:" << endl;
	for (int i = 0; i < allSongCount; i++)
	{
		WriteSong(&allSongs[i]);
	}
	cout << endl;
}