#pragma once
#include <string>
#include "Drinks.h"
#include <vector>

class Order {
public:
	Order(string);
	string getDate();
	void setDate(string);
	double getTotalCost();
	void setTotalCost();
	void addDrinks(Drinks*);
	vector<Drinks *> getAllDrinks();
	

private:
	vector<Drinks *> drinks;
	string date;
	double totalCost;

};
