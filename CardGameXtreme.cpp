// CardGameXtreme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Project replicating Card Games



#include <iostream>
#include "DeckOfCards.h"

int it = 0;


int main()
{
    deckList PlayingCards;
    PlayingCards.setDeck();
    PlayingCards.fingerDeck();
  
   while(1){
       it++;
        PlayingCards.shuffleDeck();
        PlayingCards.fingerDeck();
       
        
    }
   
}




