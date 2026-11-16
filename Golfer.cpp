// Name: Ethan DeFrance
// Project: Golf Round Tracker Capstone
// Description: Implements the Golfer class, which stores the golfer's
//              name and provides methods to access and update it.

#include "Golfer.h"

// constructor to initialize golfer name
Golfer::Golfer(std::string golferName) {
    name = golferName;
}

// returns golfers name
std::string Golfer::GetName() const {
    return name;
}

// updates golfers name
void Golfer::SetName(std::string golferName) {
    name = golferName;
}