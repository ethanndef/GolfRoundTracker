// Name: Ethan DeFrance
// Project: Golf Round Tracker Capstone
// Description: Implements the CompletedRound class, which inherits
//              from GolfRound and adds the name of the golf course.
//              Uses polymorphism to display additional information.

#include "CompletedRound.h"
#include <iostream>

// constructor initialing the golf course name
CompletedRound::CompletedRound(std::string name) {
    courseName = name;
}

// returns the name of the course
std::string CompletedRound::GetCourseName() const {
    return courseName;
}

// updates the name of the course
void CompletedRound::SetCourseName(std::string name) {
    courseName = name;
}

// Capstone Requirement: POLYMORPHISM
// overrides GolfRound's virtual DisplayRound method
void CompletedRound::DisplayRound() const {
    std::cout << "\nCourse: " << courseName << std::endl;

    // calls base class method to display the hole scores and total
    GolfRound::DisplayRound();
}