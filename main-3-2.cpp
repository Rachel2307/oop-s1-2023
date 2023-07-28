#include <iostream>
using namespace std;
int median_array(int array[], int n);
int main() {
    int array[5]={5,2,3,8,9};
    cout << median_array(array,5)<< std::endl;
    return 0;
}