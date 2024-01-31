#include "Rectangle.h"
#include <string>

Rectangle::Rectangle(string shape, int x, int y, int z, int h) : TwoDShape(shape, x, y, z, h)
{
}

int Rectangle::getArea()
{
    int area = this->getSideA() * this->getY();
    cout << "Area for rectangle is " << area << endl;
    return 0;
}

void Rectangle::print()
{
    cout << "We are looking at Rectangle class print method" << endl;
}

void Rectangle::draw()
{
    cout << "We are drawing a Rectangle shape" << endl;

}
