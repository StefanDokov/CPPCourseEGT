#include "Rectangle.h"

Rectangle::Rectangle(string b) : Shape(b)//give value of b to the parent class
{
}

void Rectangle::draw()
{
	cout << "Drawing a " << Shape::color << " rectangle" << endl;
	//using value of color of the parent class
}
