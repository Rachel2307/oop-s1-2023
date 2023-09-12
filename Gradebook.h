#pragma once
#include "Grade.h"

class Gradebook {
private:
    Grade* grades;  // Aggregation relationship
    int gradeCount;

public:
    Gradebook();
    void addGrade(int studentId, double score);
    // Other methods
};
