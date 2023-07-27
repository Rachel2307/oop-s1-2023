#include <iostream>
using namespace std;
double array_mean(int array[], int n);
int main() {
    int array[5] = {1,2,3,4,5};
    cout <<"The array is: ";
    for (int i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
    cout<<"\nThe average is: "<<array_mean(array,5)<< endl;
    return 0;
}