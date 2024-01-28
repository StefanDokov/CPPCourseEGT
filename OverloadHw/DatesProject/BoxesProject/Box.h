#pragma once
#include <iostream>
using namespace std;

class Box {
    friend ostream& operator<<(ostream&, const Box&);

public:
    Box(double w = 0.0, double l = 0.0, double h = 0.0);

    double getWidth() const;
    double getLength() const;
    double getHeight() const;

    void setWidth(double);
    void setLength(double);
    void setHeight(double);

    Box operator+(const Box&) const;


private:
    double width;
    double length;
    double height;

};