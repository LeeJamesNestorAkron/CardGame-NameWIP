// CardGameXtreme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Project replicating Card Games



#include <iostream>
#include <string>



class deckList {
private:
    struct cardNode{
        std::string suite;
    int number;
    struct cardNode* next;

    };

    cardNode* head;
    public:
        deckList();
        ~deckList();

        void setDeck();
        void addCard(std::string cardSuite, int number);
};
int main()
{
    std::cout << "Hello World!\n";
}

deckList::deckList() {
    head = nullptr;
}

void deckList::setDeck() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
        
        }
    }

    

}


void deckList::addCard(std::string cardSuite, int number) {
    cardNode* newNode;
    cardNode* nodePtr;

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
}


