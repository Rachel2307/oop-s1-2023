#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Grade.h"

int main() {
    // Create a university
    University myUniversity("My University", "City");

    // Add a course to the university
    myUniversity.addCourse(1, "Programming 101");

    // Create a student
    Student student1(1, "John Doe");

    // Get the course from the university
    //Course* course = myUniversity.getCourseById(1);

    //if (course) {
        // Add the student to the course
        //course->addStudent(&student1);
    //}

    // Create a gradebook and add grades
    //Gradebook gradebook;
   // gradebook.addGrade(1, 95.5);

    // Other actions as needed

    return 0;
}
