// Name: Ethan DeFrance
// Project: Golf Round Tracker
// Description: Defines the CompletedRound class, which inherits
//              from GolfRound and stores the golf course name.

#ifndef COMPLETEDROUND_H
#define COMPLETEDROUND_H

#include "GolfRound.h"
#include <string>

// Capstone Requirement: INHERITANCE
// CompletedRound inherits from GolfRound and adds the course name.
class CompletedRound : public GolfRound {
private:
    std::string courseName;  // stores the golf course name

public:
    CompletedRound(std::string name);

    std::string GetCourseName() const;
    void SetCourseName(std::string name);

    // Capstone Requirement: POLYMORPHISM
    // overrides the base class method to include the course name
    void DisplayRound() const override;
};

#endif