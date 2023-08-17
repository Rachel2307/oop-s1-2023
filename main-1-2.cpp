#include <iostream>
#include "Person.h"
using namespace std;
PersonList createPersonList(int n);

int main() {
    int n = 3; // Number of Person structs
    PersonList list = createPersonList(n);
    cout << "Number of people in the list: " << list.numPeople << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Person " << i + 1 << "; Name = " << list.people[i].name << "; Age = " << list.people[i].age << endl;
    }

    // free the memory allocated for the array
    delete[] list.people;

    return 0;
}