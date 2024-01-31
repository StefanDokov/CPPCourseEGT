#include "PlayingCard.h"



PlayingCard::PlayingCard(string a, string b) : type(a), suit(b)
{
}

string PlayingCard::getType()
{
    return this->type;
}

string PlayingCard::getSuit()
{
    return this->suit;
}

void PlayingCard::setType(string a)
{
    this->type = a;
}

void PlayingCard::setSuit(string a)
{
    this->suit = a;
}
