
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    Shape s("red");
    s.draw();

    Circle c("blue");
    c.draw();
    //output is "Drawing a blue circle"

    Rectangle b("green");
    b.draw();
    //output is "Drawing a green rectangle"
}
