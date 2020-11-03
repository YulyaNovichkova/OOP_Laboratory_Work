#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Book
{
	string Title;
	int PublishYear;
	int PageCount;//TODO: ����������
	string* Authors;
	int AuthorCount; //TODO: ����������
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
void SetPublishYear(Book& book, int publishYear);
void SetPageCount(Book& book, int pageCount); //TODO: ����������
void SetAuthorCount(Book& book, int authorCount); //TODO: ����������
int FindBookByAuthor(Book* books, int booksCount, string author);

//TODO: � ������ ������ �� ������� ��������� ����� �� ������ Count. ������ ���� PagesCount, � �� PageCount ��� CountPage. ���������, ��������� �����