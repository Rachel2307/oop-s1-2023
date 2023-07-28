#include <iostream>
using namespace std;
double weighted_average(int array[], int n);
int main() {
    int array[6]={1,2,1,4,1,3};
    cout << "The weighted average is: " << weighted_average(array,6) << std::endl;
    return 0;
}