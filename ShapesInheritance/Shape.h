#pragma once

#include <string>
#include<iostream>
using namespace std;
class Shape {
public:
	Shape(string, int, int, int);
	virtual int getArea();
	virtual void print();
	int getPosition();
	void setPosition(int);
	string getShape();
	void setShape(string);
	int getSize();
	void setSize(int);
	int getSideA();
	void setSideA(int);
	

private:
	int position;
	string shape;
	int size;
	int sideA;
};