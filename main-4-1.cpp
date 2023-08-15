#include <iostream>
using namespace std;
int *readNumbers();
int secondSmallestSum(int *numbers, int length);
int main() {
    int *numbers = readNumbers();
    int result = secondSmallestSum(numbers, 10);  
    cout << "Second smallest sum: " << result << endl;
    delete[] numbers; // Free the dynamically allocated memory    
    return 0;
}