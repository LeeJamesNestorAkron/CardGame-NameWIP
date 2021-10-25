#pragma once
#include <string>
class deckList {
private:
    struct cardNode {
        std::string suite;
        int number;
        struct cardNode* next;

    };
   int heat[52][52] = { 0 };
    int cardsInDeck = 0;
    cardNode* head;
public:
    deckList();
    ~deckList();

    void setDeck();
    void addCard(std::string cardSuite, int number);
    void fingerDeck();
    void shuffleDeck();
  
};