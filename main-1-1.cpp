#include<iostream>
using namespace std;
int sum_diagonal(int array[4][4]);
int main() {
    int testArray[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    cout<< "sum of the diagonal elements is: "<< sum_diagonal(testArray)<<endl;
    return 0;
}