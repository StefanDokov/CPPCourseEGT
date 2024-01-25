


#include "Point.h"
#include <iostream>
using namespace std;



Point::Point(int x, int y){
	this->setX(x);
	this->setY(y);
}


int Point::getX() const {
	return x;
}

int Point::getY() const {
	return y;
}

void Point::setX(int x) {
	if (x >= 0 && x <= 20) {
	this->x = x;
	} 
	else {
		this->x = 0;
		cout << "Invalid point" << endl;
	}
}

void Point::setY(int y) {
	if (y >= 0 && y <= 20) {
		this->y = y;
	}
	else {
		this->y = 0;
		cout << "Invalid point" << endl;

	}
	
}
