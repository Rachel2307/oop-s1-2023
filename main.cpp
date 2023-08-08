#include <iostream>
using namespace std;
#include "workshop.h"

int main() {
    // test part 2
    double myDouble = 3.14;
    cout<<"Original value:"<<myDouble<<endl;
    changeValue(&myDouble);
    cout<<"Modifed value:"<<myDouble<<endl;
    // test part 3
    double array[4]={1.3,2.5,3.8,4.9};
    printArray(array,4);
    // test part 4
    cout<<"max is: "<<arrayMax(array,4)<< endl;
    // test part 7
    int size = 5;
    double value = 7.8;
    cout<<"The array is: "<<endl;
    double* doubleArray = dynamicArray(size,value);
    printArray(doubleArray,4);
    return 0;
}