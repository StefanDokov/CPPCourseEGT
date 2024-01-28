#pragma once
#include <string>
#include <iostream>
#include "Team.h"
#include "Ref.h"
using namespace std;


class Graphic {
public: 
	Graphic(int, string, Team, Team, Ref);
	int getRound();
	void setRound(int);
	string getDate();
	void setDate(string);
	Team getTeam1();
	Team getTeam2();



private:
	int round;
	string date;
	Team team1;
	Team team2;
	Ref refer;
};