#pragma once
#include <iostream>
#include <string>
#include "PlayingCard.h"
#include <vector>
using namespace std;

class DeckOfCards {
public:
	void addCard(PlayingCard);
	void displayDeck();
	void raffleShuffle();

private:
	vector<PlayingCard> allCards;
};