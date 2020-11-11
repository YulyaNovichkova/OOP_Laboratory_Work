#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Book
{
	string Title;
	int PublishYear;
	int CountPage;//TODO: грамошибка // +
	string* Authors;
	int CountAuthor; //TODO: грамошибка // +
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
void SetPublishYear(Book& book, int publishYear);
void SetCountPage(Book& book, int countPage); //TODO: грамошибка // + 
void SetCountAuthor(Book& book, int countAuthor); //TODO: грамошибка // +
int FindBookByAuthor(Book* books, int countBooks, string author);

//TODO: в разных файлах по разному образуешь имена со словом Count. Должно быть PagesCount, а не PageCount или CountPage. Проверить, поправить везде
// +