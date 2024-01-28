#pragma once

#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(double l = 0.0, double w = 0.0);

    double getLength() const;
    double getWidth() const;

    double area() const;

    bool operator>(const Rectangle& other) const;

    bool operator<(const Rectangle& other) const;

    bool operator==(const Rectangle& other) const;

private:
    double length;
    double width;
};