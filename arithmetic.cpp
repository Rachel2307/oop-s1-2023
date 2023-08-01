#include <iostream>

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}
// Function to perform left shift
int leftShift(int a, int shiftAmount) {
    return a << shiftAmount;
}

// Function to perform right shift
int rightShift(int a, int shiftAmount) {
    return a >> shiftAmount;
}

int main() {
    // Testing the functions
    int x = 10;
    int y = 5;
    int shiftAmount = 2;

    int sum = add(x, y);
    int difference = subtract(x, y);
    int leftShiftResult = leftShift(x, shiftAmount);
    int rightShiftResult = rightShift(x, shiftAmount);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Left Shift Result: " << leftShiftResult << std::endl;
    std::cout << "Right Shift Result: " << rightShiftResult << std::endl;

    return 0;
}