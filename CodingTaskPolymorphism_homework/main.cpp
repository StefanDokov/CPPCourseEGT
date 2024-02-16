
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iomanip>

void printArea(Shape* b) //take pointer of object type Shape
{

    cout << "Area: " << fixed << setprecision(2) << b->area() << endl;

}

int main()
{
    Circle c(5);
    Rectangle r(6, 5);

    printArea(&c);
    // ouput is "Area: 78.54"
    printArea(&r);
    // ouput is "Area: 30.00"

}

