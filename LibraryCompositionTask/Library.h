#pragma once
#include "Book.h"
#include <vector>

class Library {
public:
	Library();
	void addBook(Book);
	vector<Book> getAllBooks();


private:
	vector<Book> books;
};