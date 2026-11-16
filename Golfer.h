// Name: Ethan DeFrance
// Project: Golf Round Tracker
// Description: Defines the Golfer class for storing and updating
//              the golfer's name.

#ifndef GOLFER_H
#define GOLFER_H
#include <string>

// golfer class stores info about the golfer
// encapsulation through private variables and public methods
class Golfer {
private:
    std::string name;  // Stores the golfer's name

public:
    Golfer(std::string golferName);

    std::string GetName() const;
    void SetName(std::string golferName);
};

#endif