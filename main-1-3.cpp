#include <iostream>
using namespace std;
int num_count(int array[], int n, int number);
int main() {
    int array[5] = {1,2,3,4,3};
    cout<<"The array is: ";
    for (int i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
    cout<<"\nThe count of is "<< num_count(array,5,3)<<endl;
    return 0;
}
