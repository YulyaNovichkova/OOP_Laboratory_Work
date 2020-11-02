#include <iostream>
#include "Book.h"

void DemoBook()
{
	int booksCount;
	string author;
	int bookFound;

	cout << "Enter the count of books: ";
	cin >> booksCount;
	cin.ignore();
	Book* book = new Book[booksCount];

	for (int i = 0; i < booksCount; i++)
	{
		ReadBookFromConsole(book[i]);
	}
	for (int i = 0; i < booksCount; i++)
	{
		WriteBookToConsole(book[i]);
	}

	cout << endl<< "Enter an author to search for a book: ";
	getline(cin, author);

	bookFound = FindBookByAuthor(book, booksCount, author);
	if (bookFound == -1)
	{
		cout << "No book with this author." << endl;
	}
	else
	{
		cout << "Author's book: ";
		WriteBookToConsole(book[bookFound]);
	}

	delete[] book;
	delete[] book->Authors;
}

void ReadBookFromConsole(Book& book)
{
	int publishYear;
	int pageCount;
	int authorCount;

	cout << "Enter the title of the book: ";
	getline(cin, book.Title);

	cout << "Enter the year of publication: ";
	cin >> publishYear;
	SetPublishYear(book, publishYear);

	cout << "Enter the number of pages: ";
	cin >> pageCount;
	SetPageCount(book, pageCount);

	cout << "Enter the number of authors: ";
	cin >> authorCount;
	SetAuthorCount(book, authorCount);
	book.Authors = new string[book.AuthorCount];
	cin.ignore();

	for (int i = 0; i < book.AuthorCount; i++)
	{
		cout << "Enter author #" << i + 1 << endl;
		getline(cin, book.Authors[i]);
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.AuthorCount; i++)
	{
		cout << book.Authors[i];
		if (i == book.AuthorCount - 1)
		{
			cout << ". ";
		}
		else
		{
			cout << ", ";
		}
	}
	cout << book.Title << ". ";
	cout << book.PublishYear << ". ";
	cout << " - " << book.PageCount << "p." << endl;
}

void SetPublishYear(Book& book, int publishYear)
{
	if (publishYear < 0)
	{
		throw exception("The year of publication must be positive.");
	}
	if (publishYear > 2020)
	{
		throw exception("The year of publication must not be more than the current year.");
	}
	book.PublishYear = publishYear;
}

void SetPageCount(Book& book, int pageCount)
{
	if (pageCount < 0)
	{
		throw exception("The number of pages must be greater than 0.");
	}
	book.PageCount = pageCount;
}

void SetAuthorCount(Book& book, int authorCount)
{
	if (authorCount < 1 || authorCount > 10)
	{
		throw exception("The number of authors must be from 1 to 10.");
	}
	book.AuthorCount = authorCount;
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books->Authors[i] == author)
		{
			return i;
		}
	}
	return -1;
}