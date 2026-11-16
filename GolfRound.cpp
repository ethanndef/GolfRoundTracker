// Name: Ethan DeFrance
// Project: Golf Round Tracker Capstone
// Description: Implements the GolfRound class, which stores multiple
//              golf holes, calculates total strokes and score relative
//              par, and displays the results of a golf round.

#include "GolfRound.h"
#include <iostream>

// constructor to initialize new golf round
GolfRound::GolfRound() {
}

// add new hole to round
void GolfRound::AddHole(int holeNumber, int par, int strokes) {
    Hole newHole(holeNumber, par);
    newHole.SetStrokes(strokes);

    holes.push_back(newHole);
}

// calculates total strokes for round
int GolfRound::GetTotalStrokes() const {
    int total = 0;

    for (const Hole& hole : holes) {
        total += hole.GetStrokes();
    }

    return total;
}

// calculates total par for round
int GolfRound::GetTotalPar() const {
    int total = 0;

    for (const Hole& hole : holes) {
        total += hole.GetPar();
    }

    return total;
}

// calculates score relative to par
int GolfRound::GetScoreRelativeToPar() const {
    return GetTotalStrokes() - GetTotalPar();
}

// Capstone requirement: POLYMORPHISM
// dsplays round info and can be overridden by derived classes
void GolfRound::DisplayRound() const {
    std::cout << "\nGolf Round Results\n";

    // Display the results for each hole
    for (const Hole& hole : holes) {
        std::cout << "Hole " << hole.GetHoleNumber()
                  << " | Par: " << hole.GetPar()
                  << " | Strokes: " << hole.GetStrokes()
                  << std::endl;
    }

    // Display the total results for the round
    std::cout << "\nTotal Strokes: " << GetTotalStrokes() << std::endl;
    std::cout << "Total Par: " << GetTotalPar() << std::endl;
    std::cout << "Score Relative to Par: "
              << GetScoreRelativeToPar() << std::endl;
}