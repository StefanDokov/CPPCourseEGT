#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape {
public: 
	Shape(string);
	void draw();


protected:
	string color;

};