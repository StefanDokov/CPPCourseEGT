#pragma once
#include <iostream>
#include <string>
using namespace std;


class Book {
public:
	Book(string, string, string);
	void display();

	

private:
	string title;
	string author;
	string ISBN;
};