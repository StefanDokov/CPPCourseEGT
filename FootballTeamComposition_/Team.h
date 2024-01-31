#pragma once
#include <string>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

class Team {
public:
	Team(string, string);
	string getTeamName();
	void setTeamName(string);
	string getCity();
	void setCity(string);
	int getPoints();
	void updatePoints(int);
	bool operator<(const Team&) const;

private: 
	string teamName;
	string city;
	int points;

};