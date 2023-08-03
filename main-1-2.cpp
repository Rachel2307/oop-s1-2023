#include<iostream>
using namespace std;
int is_identity(int array[10][10]);
int main() {
    int testArray[10][10] = {{1,0,0},{0,1,0},{0,2,1}};
    cout<< "Result of identity matrix: "<< is_identity(testArray)<<endl;
    return 0;
}