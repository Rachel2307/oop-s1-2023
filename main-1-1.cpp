#include <iostream>
#include "Person.h"
using namespace std;
Person* createPersonArray(int n);
int main() {
    int n=5; // number of person structs
    Person* peopleArray = createPersonArray(n);
    for (int i=0; i<n;i++) {
        cout<<"Person "<<i+1<<"; Name = "<< peopleArray[i].name<< "; Age = " << peopleArray[i].age << endl;
    }
    // free memory a;;pcated for the array
    delete[] peopleArray;
    return 0;
}