#include "Rectangle.h"

Rectangle::Rectangle(string c, double a, double b): Shape(c) ,length(a), width(b)
{
}

double Rectangle::area()
{
    return width * length;
}

void Rectangle::draw()
{
	cout << "Drawing a " << Shape::color << " rectangle" << endl;
	//using value of color of the parent class
}