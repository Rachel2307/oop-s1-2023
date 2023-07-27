#include <iostream>
using namespace std;
bool is_fanarray(int array[], int n);
int main() {
    int array[5]={1,2,3,2,1};
    cout << is_fanarray(array,5) << std::endl;
    return 0;
}