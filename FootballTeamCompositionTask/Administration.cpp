#include "Administration.h"
using namespace std;
#include <algorithm>

Adminstration::Adminstration(string a, string b): Usera(a, b)
{
}

vector<Team> Adminstration::getTeams()
{
    sort(this->teamove.begin(), this->teamove.end());
    return this->teamove;
}

void Adminstration::addTeam(Team t)
{
    this->teamove.push_back(t);
}

void Adminstration::removeTeam(string a)
{
    for (int i = 0; i < teamove.size(); i++) {
        
        if (teamove.at(i).getTeamName() == a) {
            teamove.erase(teamove.begin() + i);
            break;
        }
        
    }
}

void Adminstration::updateTeam(Team a)
{
    string namee = a.getTeamName();
    for (int i = 0; i < teamove.size(); i++) {

        if (teamove.at(i).getTeamName() == namee) {
            teamove.at(i) = a;
            break;
        }

    }
}

vector<Graphic> Adminstration::getGraphic()
{
    return this->grafics;
}

void Adminstration::addEvent(Graphic a)
{
    this->grafics.push_back(a);
}

void Adminstration::endEvent(Graphic a)
{
    this->grafics.pop_back();
}

void Adminstration::listRanking()
{
    int str = 1;

    for (auto& tem : this->getTeams()) {

        cout << str << ": " << tem.getTeamName() << " - " << tem.getPoints() << " points." << endl;

        str++;


    }
}
