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
	//TODO: ошибка на выполнении
	// +
	delete[] book->Authors;
	delete[] book;
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
	SetCountPage(book, pageCount);

	cout << "Enter the number of authors: ";
	cin >> authorCount;
	SetCountAuthor(book, authorCount);
	book.Authors = new string[book.CountAuthor];
	cin.ignore();

	for (int i = 0; i < book.CountAuthor; i++)
	{
		cout << "Enter author #" << i + 1 << endl;
		getline(cin, book.Authors[i]);
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.CountAuthor; i++)
	{
		cout << book.Authors[i];
		if (i == book.CountAuthor - 1)
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
	cout << " - " << book.CountPage << "p." << endl;
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

void SetCountPage(Book& book, int countPage)
{
	if (countPage < 0)
	{
		throw exception("The number of pages must be greater than 0.");
	}
	book.CountPage = countPage;
}

void SetCountAuthor(Book& book, int countAuthor)
{
	if (countAuthor < 1 || countAuthor > 10)
	{
		throw exception("The number of authors must be from 1 to 10.");
	}
	book.CountAuthor = countAuthor;
}

int FindBookByAuthor(Book* books, int countBooks, string author)
{
	for (int i = 0; i < countBooks; i++)
	{
		if (books->Authors[i] == author)
		{
			return i;
		}
	}
	return -1;
}