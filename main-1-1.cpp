#include <iostream>
#include "function-1-1.cpp" 
using namespace std;
int main() {
    int array1[6]= {1,2,3,4,5,6};
    cout <<"The array is: ";
    for (int i=0;i<6;i++) {
        cout<<array1[i]<<" ";
    }
    cout<<"\nThe sum is: "<<array_sum(array1,6) << endl;
    return 0;
}
