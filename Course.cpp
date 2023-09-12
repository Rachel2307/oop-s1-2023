#include "Course.h"

Course::Course(int id, std::string name) {
    this->id = id;
    this->name = name;
    this->persons = nullptr;
    this->personCount = 0;
}

void Course::addStudent(Student* student) {
    // Implement student addition logic here
    // You may need to allocate memory for students, add the student, etc.
}

// Other methods and getters/setters for Course
