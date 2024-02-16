#include "Circle.h"

Circle::Circle(string b) : Shape(b) //give value of b to the parent class
{}


void Circle::draw()
{
	cout << "Drawing a " << Shape::color << " circle" << endl;
	//using value of color of the parent class
}
