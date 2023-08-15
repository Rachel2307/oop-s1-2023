#include <iostream>
using namespace std;
int *reverseArray(int *numbers1,int length);
bool equalsArray(int *numbers1,int *numbers2,int length);
int *readNumbers();
int main() {
    int *numbers1 = readNumbers();
    int *reverseNumbers = reverseArray(numbers1,10);
    bool result = equalsArray(numbers1,reverseNumbers,10);
    for (int i=0;i<10;i++) {
        cout<<reverseNumbers[i]<<" ";
    }
    cout<<result<<endl;
    delete[] numbers1; // Free the dynamically allocated memory
    delete[] reverseNumbers;
    return 0;   
}