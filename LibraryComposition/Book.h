#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Author.h"



class Book {
public:
	Book(string, Author, string, int);
	string getName();
	void setName(string);
	Author getAuthor();
	int getYear();
	void setYear(int);
	string getGenre();
	void setGenre(string);


	private:
		string name;
		Author author;
		string genre;
		int year;


};