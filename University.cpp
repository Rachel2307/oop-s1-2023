#include "University.h"

University::University(std::string name, std::string location) {
    this->name = name;
    this->location = location;
    this->courses = nullptr;
    this->courseCount = 0;
}

void University::addCourse(int id, std::string name) {
    // Implement course addition logic here
    // You may need to allocate memory for courses, add the course, etc.
}

// Other methods and getters/setters for University
