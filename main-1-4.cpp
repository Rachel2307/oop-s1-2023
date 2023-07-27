#include <iostream>
using namespace std;
int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int array1[5] = {1,2,3,4,3};
    int array2[5] = {2,5,3,1,2};
    cout<<"The array 1 is: ";
    for (int i=0;i<5;i++) {
        cout<<array1[i]<<" ";
    }
    cout<<"\nThe array 2 is: ";
    for (int i=0;i<5;i++) {
        cout<<array2[i]<<" ";
    }
    cout<<"\nThe sum of array 1 and array 2 is: "<< sum_two_arrays(array1,array2,5)<<endl;
    return 0;
}