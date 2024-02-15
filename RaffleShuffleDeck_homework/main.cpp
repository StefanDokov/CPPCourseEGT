
#include <iostream>
#include "DeckOfCards.h"
#include "PlayingCard.h"

int main()
{
    PlayingCard c1("spade", "3");
    PlayingCard c2("hearts", "3");
    PlayingCard c3("diamond", "3");
    PlayingCard c4("fourth", "3");
    PlayingCard c5("spade", "4");
    PlayingCard c6("hearts", "4");
    PlayingCard c7("diamond", "4");
    PlayingCard c8("fourth", "4");
    
    DeckOfCards deck;
    deck.addCard(c1);
    deck.addCard(c2);
    deck.addCard(c3);
    deck.addCard(c4);
    deck.addCard(c5);
    deck.addCard(c6);
    deck.addCard(c7);
    deck.addCard(c8);

    deck.displayDeck();

    deck.raffleShuffle();
    deck.displayDeck(); 
    deck.raffleShuffle(); 
    deck.displayDeck();

}
