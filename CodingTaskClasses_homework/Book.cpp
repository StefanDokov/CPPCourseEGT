#include "Book.h"

Book::Book(string a, string b, int c): title(a), author(b), pages(c)
{
}

void Book::display()
{
	cout << "Title: " << this->title << ", Author: " << this->author << ", Pages: " << this->pages << endl;
}
