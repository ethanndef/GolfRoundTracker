// Name: Ethan DeFrance
// Project: Golf Round Tracker
// Description: Defines the Hole class for storing golf hole info.

#ifndef HOLE_H
#define HOLE_H

// hole class stores the info for a single golf hole
// encapsulation through private variables and public methods
class Hole {
private:
    int holeNumber;  // Stores the hole number
    int par;         // Stores the par for the hole
    int strokes;     // Stores the number of strokes taken

public:
    Hole(int number, int holePar);

    int GetHoleNumber() const;
    int GetPar() const;
    int GetStrokes() const;

    void SetPar(int holePar);
    void SetStrokes(int strokeCount);

    int GetScoreRelativeToPar() const;
};

#endif