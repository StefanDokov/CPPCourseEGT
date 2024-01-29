#include "Square.h"
#include "TwoDShape.h"
#include "Shape.h"
#include <string>


Square::Square(string shape, int x, int y, int z, int h) : TwoDShape(shape, x, y, z, h)
{
}

int Square::getArea()
{
    int area = this->getSideA() * this->getSideA();
    cout << "Area for square is " << area << endl;
    return 0;
}

void Square::print()
{
    cout << "We are looking at Square class print method" << endl;
}

void Square::draw()
{
    cout << "We are drawing a Square shape" << endl;

}
