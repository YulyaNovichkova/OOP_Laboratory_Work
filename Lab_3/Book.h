#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Book
{
	string Title;
	int PublishYear;
	int PageCount;
	string* Authors;
	int AuthorCount;
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
void SetPublishYear(Book& book, int publishYear);
void SetPageCount(Book& book, int pageCount);
void SetAuthorCount(Book& book, int authorCount);
int FindBookByAuthor(Book* books, int booksCount, string author);