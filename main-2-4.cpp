#include <iostream>
using namespace std;
bool is_ascending(int array[], int n);
int main() {
    int array[5] = {1,2,-5,4,3};
    cout<<"The array is: ";
    for (int i=0;i<5;i++) {
        cout<<array[i]<<" ";
    }
    cout<<"\n"<<is_ascending(array,5)<<endl;
    return 0;
}