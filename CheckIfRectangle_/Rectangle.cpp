#include "Rectangle.h"

Rectangle::Rectangle(const Point &p1, const Point &p2, const Point &p3, const Point &p4)
	:p1(p1), p2(p2), p3(p3),p4(p4)
{
	
}

const Point &Rectangle::getP1() const
{
	return p1;
}

const Point &Rectangle::getP2() const
{
	return p2;
}

void Rectangle::setP2(const Point &p2)
{
	this->p2 = p2;
}

const Point &Rectangle::getP3() const
{
	return p3;
}

void Rectangle::setP3(const Point &p3)
{
	this->p3 = p3;
}

const Point &Rectangle::getP4() const
{
	return p4;
}

void Rectangle::setP4(const Point &p4)
{
	this->p4 = p4;
}

void Rectangle::setP1(const Point &p1)
{
	this->p1 = p1;
}

bool Rectangle::isRectangle() {
	if (this->p1.getX() == this->p3.getX() && this->p2.getX() == this->p4.getX()
		&& this->p2.getY() == this->p1.getY() && this->p3.getY() == this->p4.getY()) {
		return true;
	}
	
		return false;
	
}

bool Rectangle::isSquare()
{
	if (isRectangle()) {
		if (this->p2.getX() - this->p1.getX() == this->p3.getY() - this->p1.getY()) {
			return true;
		}
	}
	return false;
}





