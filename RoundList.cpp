// Name: Ethan DeFrance
// Project: Golf Round Tracker Capstone
// Description: Implements a singly linked list for storing
//              golf rounds and an insertion sort for sorting
//              rounds based on the total strokes.

#include "RoundList.h"
#include <iostream>

// constructor initializes an empty linked list
RoundList::RoundList() {
    head = nullptr;
    size = 0;
}

// destructor deletes all dynamically allocated nodes
RoundList::~RoundList() {
    Node* current = head;

    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

// Capstone requirement: CUSTOM LINKED LIST
// adds new node with GolfRound data to linked list
void RoundList::AddRound(const GolfRound& round) {
    Node* newNode = new Node(round);

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;

        // traverse until last node
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    size++;
}

// traverses linked list and displays each round
void RoundList::DisplayRounds() const {
    Node* current = head;
    int roundNumber = 1;

    while (current != nullptr) {
        std::cout << "\n========== Round "
                  << roundNumber << " ==========\n";

        current->round.DisplayRound();

        current = current->next;
        roundNumber++;
    }
}

// returns num of golf rounds in linked list
int RoundList::GetSize() const {
    return size;
}

// Capstone requirement: SORTING ALGORITHM
// insertion sort to organize rounds from lowest to highest score
void RoundList::SortByScore() {
    Node* sortedHead = nullptr;

    // remove nodes from og list
    while (head != nullptr) {
        Node* current = head;
        head = head->next;

        // insert at start if list is empty or current round is lowest score
        if (sortedHead == nullptr ||
            current->round.GetTotalStrokes() <
            sortedHead->round.GetTotalStrokes()) {

            current->next = sortedHead;
            sortedHead = current;
        }
        else {
            Node* search = sortedHead;

            // find where to insert current round
            while (search->next != nullptr &&
                   search->next->round.GetTotalStrokes() <=
                   current->round.GetTotalStrokes()) {

                search = search->next;
            }

            // insert node into sorted list
            current->next = search->next;
            search->next = current;
        }
    }

    // update head to sorted list
    head = sortedHead;
}