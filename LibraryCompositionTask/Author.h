#pragma once
using namespace std;
#include <string>
#include <iostream>

class Author {
public:
	Author(string, string, string);
	string getFirstName();
	void setFirstName(string);
	string getLastName();
	void setLastName(string);
	string getCountry();
	void setCountry(string);



private:

	string firstName;
	string lastName;
	string country;


};