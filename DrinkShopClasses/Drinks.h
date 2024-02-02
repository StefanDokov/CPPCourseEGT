#pragma once
using namespace std;
#include <string>
#include <iostream>


class Drinks {
public:
	Drinks(string, double, double, string);
	string getName();
	void setName(string);
	double getPrice();
	void setPrice(double);
	double getQuantity();
	void setQuantity(double);
	string getType();
	void setType(string);
	virtual void print();
	virtual double calculatePrice();



private:
	string name;
	double price;
	double quantity;
	string type;

};

