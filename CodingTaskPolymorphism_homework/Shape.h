#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
	Shape(string);
	virtual ~Shape() {};
	void draw();
	virtual double area();
	//area() must be override in children classes
protected:
	string color;
};