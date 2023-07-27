#include <iostream>
using namespace std;
int array_sum(int array[], int n) ;
int main() {
    int array1[6]= {1,2,3,4,5,6};
    cout <<"The array is: ";
    for (int i=0;i<6;i++) {
        cout<<array1[i]<<" ";
    }
    cout<<"\nThe sum is: "<<array_sum(array1,6) << endl;
    return 0;
}
