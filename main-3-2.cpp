#include <iostream>
using namespace std;
int median_array(int array[], int n);
int main() {
    int array[6]={5,2,3,4,8,9};
    cout << median_array(array,6) << std::endl;
    return 0;
}