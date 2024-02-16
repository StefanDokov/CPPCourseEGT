
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
    Shape s("green");
    s.draw();
    Circle c("red",5);
    c.draw();
    Rectangle r("blue", 6, 5);
    r.draw();

    printArea(&s);

    printArea(&c);
    // ouput is "Area: 78.54"
    printArea(&r);
    // ouput is "Area: 30.00"

}

