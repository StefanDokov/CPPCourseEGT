#pragma once
#include <string>
using namespace std;
#include <iostream>
#include "Team.h"
#include "Usera.h"
#include <vector>
#include "Graphic.h"

class Adminstration: public Usera {
public:
	Adminstration(string, string);
	vector<Team> getTeams();
	void addTeam(Team);
	void removeTeam(string);
	void updateTeam(Team);
	vector<Graphic> getGraphic();
	void addEvent(Graphic);
	void endEvent(Graphic);
	void listRanking();

private:
	vector<Team> teamove;
	vector<Graphic> grafics;

};