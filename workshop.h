#include <iostream>
using namespace std;
// function part 2
void changeValue(double* ptr) {
    *ptr = 42.0;
}
// function part 3
void printArray(double* array, int size) {
    for (int i=0; i<size;i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
// function part 4
double arrayMax(double* array, int size) {
    double max = array[0];
    for (int i=0;i<size;i++) {
        if (array[i]>max) {
            max = array[i];
        }
    }
    return max;
}
// function part 7
double* dynamicArray(int N, double M) {
    double* doubleArray = new double[N];
    for (int i=0;i<N;i++) {
        doubleArray[i]=M;
    }
    return doubleArray;
}
