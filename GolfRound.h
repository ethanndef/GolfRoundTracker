// Name: Ethan DeFrance
// Project: Golf Round Tracker
// Description: Defines the GolfRound class for storing holes
//              and calculating golf round scores.

#ifndef GOLFROUND_H
#define GOLFROUND_H
#include <vector>
#include "Hole.h"

// GolfRound class stores multiple holes and calculates round scores
// encapsulation and serves as a base class for inheritance
class GolfRound {
private:
    std::vector<Hole> holes;  // stores holes played in round

public:
    GolfRound();
    virtual ~GolfRound() = default;

    // adds hole with its par and num of strokes
    void AddHole(int holeNumber, int par, int strokes);

    // Methods for calculating round scores
    int GetTotalStrokes() const;
    int GetTotalPar() const;
    int GetScoreRelativeToPar() const;

    // Capstone requirement: POLYMORPHISM
    // virtual method allows derived classes to override how rounds are displayed
    virtual void DisplayRound() const;
};

#endif