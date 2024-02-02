#pragma once
#include "Drinks.h"


class Alcoholic : public Drinks {
public:
	Alcoholic(string, double, double, string, double, double);
	double getVolume();
	void setVolume(double);
	double getTax();
	void setTax(double);
	double calculatePrice();



private:
	double volume;
	double tax;



};