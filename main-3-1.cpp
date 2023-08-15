#include <iostream>
using namespace std;
bool equalsArray(int *numbers1,int *numbers2,int length);
int *readNumbers();
int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();
    bool result = equalsArray(numbers1,numbers2,10);
    cout<<result<<endl;
    delete[] numbers1; // Free the dynamically allocated memory
    delete[] numbers2;
    return 0;   
}