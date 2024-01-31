#include "DeckOfCards.h"
#include "PlayingCard.h"

void DeckOfCards::addCard(PlayingCard a)
{
	this->allCards.push_back(a);
}

void DeckOfCards::displayDeck()
{
	
	for (auto& card : this->allCards) {
		cout << card.getType() << " : " << card.getSuit() << endl;
	}
}

void DeckOfCards::raffleShuffle()
{
	vector<PlayingCard> mid;
	int a = allCards.size() / 2 - 1;
	int b = allCards.size() - 1;

	while (a >= 0 && b >= allCards.size() / 2) {
		mid.push_back(allCards[a]);
		mid.push_back(allCards[b]);
		a--;
		b--;
	}
		
	allCards = mid;
}


