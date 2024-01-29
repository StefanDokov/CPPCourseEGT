#pragma once
#include <string>
#include <iostream>
using namespace std;

class Adress {
public:
	Adress(string, string, string, int);
	string getName();
	void setName(string);
	string getCity();
	void setCity(string);
	string getStreet();
	void setStreet(string);
	int getPhone();
	void setPhone(int);


private:
	string name;
	string city;
	string street;
	int phone;
};