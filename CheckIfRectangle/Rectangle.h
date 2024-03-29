#pragma once
#include "Point.h"

class Rectangle {

private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;

public:
	Rectangle(const Point &p1, const Point &p2, const Point &p3, const Point &p4);
	const Point &getP1() const;
	void setP1(const Point &p1);

	const Point &getP2() const;
	void setP2(const Point &p2);

	const Point &getP3() const;
	void setP3(const Point &p3);

	const Point &getP4() const;
	void setP4(const Point &p4);

	bool isRectangle();

	bool isSquare();

};