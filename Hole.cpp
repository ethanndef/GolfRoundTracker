// Name: Ethan DeFrance
// Project: Golf Round Tracker Capstone
// Description: Implements the Hole class, which stores the hole number,
//              par, and strokes. The score relative to par is also 
//              recorded for the hole.


#include "Hole.h"

// constructor initializes the hole info
Hole::Hole(int number, int holePar) {
    holeNumber = number;
    par = holePar;
    strokes = 0;
}

// returns hole number
int Hole::GetHoleNumber() const {
    return holeNumber;
}

// returns par for hole
int Hole::GetPar() const {
    return par;
}

// returns strokes taken
int Hole::GetStrokes() const {
    return strokes;
}

// updates par for hole
void Hole::SetPar(int holePar) {
    par = holePar;
}

// update strokes, if value is positive
void Hole::SetStrokes(int strokeCount) {
    if (strokeCount >= 0) {
        strokes = strokeCount;
    }
}

// calculates score relative to par
// negative = under par, positive = over par, zero = even par
int Hole::GetScoreRelativeToPar() const {
    return strokes - par;
}