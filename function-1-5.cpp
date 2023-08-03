#include <iostream>
using namespace std;
void print_summed(int array1[3][3],int array2[3][3]) {
    int sum_array[3][3] = {0};
    // add 2 array together
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            sum_array[i][j]=array1[i][j]+array2[i][j];
        }
    }
    // display result
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            cout<<sum_array[i][j]<<" ";
        }
        cout<<endl;
    } 
}