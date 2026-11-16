// Capstone Draft - Unimplemented Features:
// interactive menu for entering golf round
// allow user to enter score for all 18 holes
// allow user to edit or delete rounds
// save and load rounds from file


// Name: Ethan DeFrance
// Project: Golf Round Tracker Capstone
// Description:  Creates golf rounds, stores them in a custom linked list,
//               linked list,sorts rounds by total strokes, and 
//               demonstrates inheritance and polymorphism.

#include <iostream>
#include "Golfer.h"
#include "GolfRound.h"
#include "CompletedRound.h"
#include "RoundList.h"

int main() {
    Golfer golfer("Ethan");
    RoundList roundHistory;

    // create first golf round
    GolfRound round1;
    round1.AddHole(1, 4, 5);
    round1.AddHole(2, 3, 3);
    round1.AddHole(3, 5, 4);

    // create second golf round
    GolfRound round2;
    round2.AddHole(1, 4, 4);
    round2.AddHole(2, 3, 4);
    round2.AddHole(3, 5, 5);

    // Create third golf round
    GolfRound round3;
    round3.AddHole(1, 4, 6);
    round3.AddHole(2, 3, 4);
    round3.AddHole(3, 5, 5);

    // Capstone requirement: CUSTOM LINKED LIST
    // add rounds in an unsorted order
    roundHistory.AddRound(round3);
    roundHistory.AddRound(round1);
    roundHistory.AddRound(round2);

    std::cout << "Golf Round Tracker\n";
    std::cout << "Golfer: " << golfer.GetName() << "\n";

    std::cout << "\nTotal Rounds: "
              << roundHistory.GetSize() << "\n";

    // display rounds before sorting
    std::cout << "\n===== Rounds Before Sorting =====\n";
    roundHistory.DisplayRounds();

    // Capstone requirement: SORTING
    // insertion sort
    roundHistory.SortByScore();

    // displays rounds after sorting
    std::cout << "\n===== Rounds After Sorting =====\n";
    roundHistory.DisplayRounds();

    // Capstone requirement: INHERITANCE
    // CompletedRound inherits from GolfRound
    CompletedRound completedRound("Raccoon Creek Golf Course");
    completedRound.AddHole(1, 4, 4);
    completedRound.AddHole(2, 3, 3);
    completedRound.AddHole(3, 5, 6);

    std::cout << "\n===== Completed Round =====\n";

    // Capstone requirement: POLYMORPHISM
    // base class pointer calls the derived class method
    GolfRound* roundPointer = &completedRound;
    roundPointer->DisplayRound();

    return 0;
}
