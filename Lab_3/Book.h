#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Book
{
	string Title;
	int PublishYear;
	int CountPage;//TODO: ���������� // +
	string* Authors;
	int CountAuthor; //TODO: ���������� // +
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
void SetPublishYear(Book& book, int publishYear);
void SetCountPage(Book& book, int countPage); //TODO: ���������� // + 
void SetCountAuthor(Book& book, int countAuthor); //TODO: ���������� // +
int FindBookByAuthor(Book* books, int countBooks, string author);

//TODO: � ������ ������ �� ������� ��������� ����� �� ������ Count. ������ ���� PagesCount, � �� PageCount ��� CountPage. ���������, ��������� �����
// +