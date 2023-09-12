#pragma once
#include <string>
#include "Course.h"

class University {
private:
    std::string name;
    std::string location;
    Course* courses;  // Composition relationship
    int courseCount;

public:
    University(std::string name, std::string location);
    void addCourse(int id, std::string name);
    // Other methods and getters/setters
};
