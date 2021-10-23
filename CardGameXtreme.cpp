// CardGameXtreme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Project replicating Card Games



#include <iostream>
#include <string>


class deckList {
    private cardNode{
        std::string suite;
    int number;
    struct listNode* next;

    };

    listNode* head;
    public:
        deckList();
        ~deckList();

        void setDeck();
};
int main()
{
    std::cout << "Hello World!\n";
}

deckList::deckList() {
    head = nullptr;
}

void deckList::setDeck() {

}

