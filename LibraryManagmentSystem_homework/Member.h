#pragma once
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

class Member {
public:
	Member(string, int, string);
	void display();
	Book* borrowBook(Book* book);


private:
	string name;
	int age;
	string memberID;
};