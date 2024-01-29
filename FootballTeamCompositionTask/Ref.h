#pragma once
#include <string>
using namespace std;


class Ref {
public:
	Ref(string);
	string getName();
	void setName(string);


private: 
	string name;
};

