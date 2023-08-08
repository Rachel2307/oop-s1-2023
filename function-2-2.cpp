#include<iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal = 0;
    int base = 1; 
    // The base to multiply the binary digit with
    // Traverse the array in reverse to start from the least significant digit
    for (int i = number_of_digits - 1; i >= 0; i--) {
        decimal += binary_digits[i] * base;
        base = base * 2; // Update the base for the next iteration (multiply by 2)
    }
    return decimal;
}