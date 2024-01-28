#include "Graphic.h"

Graphic::Graphic(int a, string b, Team c, Team d, Ref e) : team1(c), team2(d), refer(e)
{
    this->setRound(a);
    this->setDate(b);
}

int Graphic::getRound()
{
    return this->round;
}

void Graphic::setRound(int a)
{
    this->round = a;
}

string Graphic::getDate()
{
    return this->date;
}

void Graphic::setDate(string a)
{
    this->date = a;
}

Team Graphic::getTeam1()
{
    return this->team1;
}



Team Graphic::getTeam2()
{
    return this->team2;
}



//Referee Graphic::getReferee()
//{
//    return this->refereeOnDuty;
//}


