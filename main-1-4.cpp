#include <iostream>
#include "Person.h"
using namespace std;
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 3; // Number of Person structs
    
    // Create a PersonList
    PersonList originalList;
    originalList.numPeople = n;
    originalList.people = new Person[n];
    for (int i = 0; i < n; ++i) {
        originalList.people[i].name = "Original Person";
        originalList.people[i].age = 5;
    }
    
    // Perform shallow copy
    PersonList copiedList = shallowCopyPersonList(originalList);

    // Modify the copied list to see if the original is affected
    copiedList.people[0].name = "Copied Person";
    copiedList.people[0].age = 10;

    // Print the original list
    cout << "Original List:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Person " << i + 1 << ": Name = " << originalList.people[i].name << ", Age = " << originalList.people[i].age << endl;
    }

    // Print the copied list
    cout << "Copied List:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Person " << i + 1 << ": Name = " << copiedList.people[i].name << ", Age = " << copiedList.people[i].age << endl;
    }

    // Don't forget to free the memory allocated for the original array
    delete[] originalList.people;

    return 0;
}