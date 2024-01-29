#pragma once
#include <string>
using namespace std;
#include <iostream>

class Usera {
public:
	Usera(string, string);
	string getUsername();
	void setUsername(string);
	string getPassword();
	void setPassword(string);




private:
	string username;
	string password;
};