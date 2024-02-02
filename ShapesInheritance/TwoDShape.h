#pragma once

#include "Shape.h"
#include <string>
#include <iostream>
using namespace std;


class TwoDShape : public Shape {
public:
	TwoDShape(string, int, int, int, int);

		
		virtual int getArea();
		virtual void print();
		virtual void draw();
		int getY();
		void setY(int);
private:
	int y;

};