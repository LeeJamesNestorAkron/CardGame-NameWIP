#include "DeckOfCards.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


deckList::deckList() {
    head = nullptr;
}

deckList::~deckList() {
    head = nullptr;
}

void deckList::setDeck() {
   for(int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++) {
            if (i == 0)
                addCard("Hearts", j);
            if(i == 1)
                addCard("Spades", j);
            if(i==2)
            addCard("clubs", j);
            if(i==3)
            addCard("diamonds", j);
            }
        }
        return;
    }


void deckList::addCard(std::string cardSuite, int number) {
    cardNode* newNode;
    cardNode* nodePtr;
    cardsInDeck++;

    newNode = new cardNode;
    newNode->suite = cardSuite;
    newNode->number = number;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
    }
    else {

        nodePtr = head;
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        nodePtr->next = newNode;
    }
    return;
}

void deckList::fingerDeck() {
    std::cout <<  std::endl << "Shuffling" << std::endl;
    int position = 0;
    int num = 0;
        cardNode* nodePtr;
        nodePtr = head;
        while (nodePtr)
        {
            position++;
           num = nodePtr->number;
            heat[position][num]++;
            std::cout << "The card: " << nodePtr->number << " of " << nodePtr->suite << std::endl;
            nodePtr = nodePtr->next;
        }
        std::cout << std::endl;
        std::cout << cardsInDeck << std::endl;
        return;

}

void deckList::shuffleDeck() {
    cardNode* nodePtr = nullptr;
        cardNode* previousCard = nullptr;
        cardNode* movedCard = nullptr;
        srand((unsigned int)time(NULL));

        if (!head) {
            std::cout << "No Deck to Shuffle";
        }
        else {
            //For each card in the deck, Find the last card in the deck
            for (int i = 0; i < cardsInDeck; i++) {
                int num = (rand() % (cardsInDeck - 1));
                nodePtr = head;
                while (nodePtr->next != nullptr) {
                    previousCard = nodePtr;
                    nodePtr = nodePtr->next;
                }
                //make the last card point to nothing, mmake movedcard point to this card, return node to the head, and previous to null
                previousCard->next = nullptr;
                movedCard = nodePtr;
                nodePtr = head;
                previousCard = nullptr;
                //find the card in the randomth position
                for (int j = 0; j < num; j++) {
               
                        previousCard = nodePtr;
                        nodePtr = nodePtr->next;


                }
                //place the rando card in between the previous and last unless its the head, then in which case don't
                if (previousCard) {
                    previousCard->next = movedCard;
                    movedCard->next = nodePtr;
                }
                else {
                    //head = movedCard;
                    movedCard->next = nodePtr;
                }
            }
        }
    return;

}