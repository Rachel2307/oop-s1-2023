#include<iostream>
using namespace std;
int binary_to_int(int binary_digits[], int number_of_digits);
int main() {
    int number_of_digits;
    cout << "Enter the number of binary digits: ";
    cin >> number_of_digits;
    // The maximum size of 30 
    int binary_digits[30]; 
    cout << "Enter the binary digits (from most significant to least significant): ";
    for (int i = 0; i < number_of_digits; i++) {
        cin >> binary_digits[i];
    }

    int decimal_number = binary_to_int(binary_digits, number_of_digits);
    cout << "The decimal value is: " << decimal_number << endl;

    return 0;
}