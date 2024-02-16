#include "Circle.h"

Circle::Circle(string a, double b) : Shape(a) , radius(b)
{
}

double Circle::area()
{
    double pi = 3.14159;
    return pi * (radius * radius);
}

void Circle::draw()
{
	cout << "Drawing a " << Shape::color << " circle" << endl;
	//using value of color of the parent class
}
