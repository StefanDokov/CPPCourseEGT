#pragma once

#include "TwoDShape.h"
#include <string>


class Circle : public TwoDShape {
public:
	Circle(string, int, int, int, int = 1);

	virtual int getArea();
	virtual void print();
	virtual void draw();




};

