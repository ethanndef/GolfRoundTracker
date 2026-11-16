// Name: Ethan DeFrance
// Course: C++ Level 2
// Project: Golf Round Tracker Capstone
// Description: Defines a singly linked list used to store
//              golf rounds and sort by total stokes logged in the round.

#ifndef ROUNDLIST_H
#define ROUNDLIST_H

#include "GolfRound.h"

// Capstone requirement: CUSTOM LINKED LIST
class RoundList {
private:
    // node stores a GolfRound and pointer to next node
    struct Node {
        GolfRound round;
        Node* next;

        Node(const GolfRound& newRound)
            : round(newRound), next(nullptr) {
        }
    };

    Node* head;  // points to first node
    int size;    // tracks num of rounds stored

public:
    RoundList();
    ~RoundList();

    // prevents copying the linked list
    RoundList(const RoundList&) = delete;
    RoundList& operator=(const RoundList&) = delete;

    // adds new round to end of linked list
    void AddRound(const GolfRound& round);

    // displays all rounds stored in list
    void DisplayRounds() const;

    // returns total num of rounds
    int GetSize() const;

    // Capstone requirement: SORTING ALGORITHM
    // insertion sort to organize rounds by total strokes
    void SortByScore();
};

#endif