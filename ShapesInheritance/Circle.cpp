#include "Circle.h"
#include <cmath>
#include <iostream>
#include <string>


Circle::Circle(string shape, int x, int y, int z, int h) : TwoDShape(shape, x, y, z, h)
{
}

int Circle::getArea()
{

    double area = 3.14 * (this->getSideA() * this->getSideA());
    cout << "Area for circle is " << area << endl;
    return 0;
}

void Circle::print()
{
    cout << "We are looking at Circle class print method" << endl;

}

void Circle::draw()
{
    cout << "We are drawing a Circle shape" << endl;

}