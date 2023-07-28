#include <iostream>
using namespace std;
void two_five_nine(int array[], int n);
int main() {
    int array[5] = {1,2,-5,4,3};
    cout<<"The array is:";
    for (int i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    two_five_nine(array,5);
    return 0;
}
