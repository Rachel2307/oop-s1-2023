#include <iostream>
using namespace std;
int min_element(int array[], int n);
int main() {
    int array[5] = {1,2,-5,4,3};
    cout<<"The array is: ";
    for (int i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
    cout<<"\nThe minimum number is "<< min_element(array,5)<<endl;
    return 0;
}
