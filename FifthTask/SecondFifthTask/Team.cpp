#include "Team.h"

Team::Team(string a, string b)
{
    this->setTeamName(a);
    this->setCity(b);
    this->points = 0;
}

string Team::getTeamName()
{
    return this->teamName;
}

void Team::setTeamName(string a)
{
    this->teamName = a;
}

string Team::getCity()
{
    return this->city;
}

void Team::setCity(string a)
{
    this->city = a;
}

int Team::getPoints()
{
    return this->points;
}


void Team::updatePoints(int a)
{
    this->points += a;
}

bool Team::operator<(const Team& other) const {
    return points > other.points; 
}
