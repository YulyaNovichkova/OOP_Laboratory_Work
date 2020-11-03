#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Book
{
	string Title;
	int PublishYear;
	int PageCount;//TODO: грамошибка
	string* Authors;
	int AuthorCount; //TODO: грамошибка
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
void SetPublishYear(Book& book, int publishYear);
void SetPageCount(Book& book, int pageCount); //TODO: грамошибка
void SetAuthorCount(Book& book, int authorCount); //TODO: грамошибка
int FindBookByAuthor(Book* books, int booksCount, string author);

//TODO: в разных файлах по разному образуешь имена со словом Count. Должно быть PagesCount, а не PageCount или CountPage. Проверить, поправить везде