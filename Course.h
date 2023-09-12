#pragma once
#include "Person.h"

class Course {
private:
    int id;
    std::string name;
    Person** persons;  // Aggregation relationship
    int personCount;

public:
    Course(int id, std::string name);
    void addStudent(Student* student);
    // Other methods and getters/setters
};
