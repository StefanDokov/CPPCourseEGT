#pragma once
#include "TwoDShape.h"
#include <string>


class Rectangle : public TwoDShape {
public: 
	Rectangle(string, int, int, int, int);
	virtual int getArea();
	virtual void print();
	virtual void draw();


};