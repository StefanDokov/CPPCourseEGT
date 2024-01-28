#pragma once
#include "Drinks.h"


class NoAlcoholic : public Drinks
{
public:
	NoAlcoholic(string, double, double, string, double, double);

	int getLiters();
	void setLiters(double);
	double getCityTax();
	void setCityTax(double);
	double calculatePrice();



private:
	double liters;
	double cityTax;




};