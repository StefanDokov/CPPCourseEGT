#include "Library.h"

Library::Library()
{
}

void Library::addBook(Book a)
{
	this->books.push_back(a);
}

vector<Book> Library::getAllBooks()
{
	return this->books;
}
