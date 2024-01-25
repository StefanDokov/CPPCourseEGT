#pragma once
#include <string>
#include <iostream>
#include "Adress.h"
using namespace std;


class Package {
public:
	Package(int, int, Adress, Adress);
	int getKg();
	void setKg(int);
	Adress getClient();
	void setClient(Adress);
	Adress getReceiver();
	void setReceiver(Adress);
	void getInfo();
	int getPrice();
	void setPrice(int);
	virtual int calculateCost();

private:
	int kg;
	int basePrice;
	Adress client;
	Adress reciever;
};