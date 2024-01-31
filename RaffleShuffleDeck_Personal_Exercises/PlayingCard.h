#pragma once
#include <iostream>
#include <string>
using namespace std;


class PlayingCard {
public:
	
	PlayingCard(string, string);
	string getType();
	string getSuit();
	void setType(string);
	void setSuit(string);
private:
	string type;
	string suit;

};