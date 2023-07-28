#include <iostream>
using namespace std;
double sum_even(double array[], int n);
int main() {
    double array[6]={1.0,2.0,3.0,4.4,5.2,6.1};
    cout<<"The array is:";
    for (int i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    cout<<"Sum of the elements in even positions is: "<< sum_even(array,6)<<endl;
    return 0;
}