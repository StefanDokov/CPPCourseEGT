#include "Book.h"

Book::Book(string a, string b, string c) : title(a), author(b), ISBN(c)
{
}

void Book::display()
{
	cout << "Title: " << this->title << ", Author: " << this->author << ", ISBN: " << this->ISBN << endl;
}
