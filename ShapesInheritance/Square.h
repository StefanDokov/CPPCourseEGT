#pragma once
#include "TwoDShape.h"
#include <string>


class Square : public TwoDShape {
public: 
	Square(string, int, int, int, int = 1);

	virtual int getArea();
	virtual void print();
	virtual void draw();



};