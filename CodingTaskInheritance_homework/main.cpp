
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    Circle c("blue");
    Rectangle b("green");

    c.draw();
    //output is "Drawing a blue circle"
    b.draw();
    //output is "Drawing a green rectangle"
}
