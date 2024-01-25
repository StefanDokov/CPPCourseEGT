#include "TwoDShape.h"
#include <string>


TwoDShape::TwoDShape(string shape, int x, int y, int z, int h) : Shape(shape, x, y, z)
{
    this->setY(h);
}



int TwoDShape::getArea()
{
    cout << "This is 2D Area Calculating" << endl;
    return 0;
}

void TwoDShape::print()
{
    cout << "We are in 2DShape Class" << endl;
}

int TwoDShape::getY()
{
    return this->y;
}

void TwoDShape::setY(int y)
{
    this->y = y;
}

void TwoDShape::draw() {
    cout << "We are drawing a 2d shape" << endl;
}

