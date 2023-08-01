#include <iostream>
#include <string>
// Function to convert decimal to binary
std::string decimalToBinary(int decimal) {
    std::string binaryNumber = "";
    while (decimal > 0) {
        int remainder = decimal % 2;
        binaryNumber = std::to_string(remainder) + binaryNumber;
        decimal = decimal / 2;
    }
    return binaryNumber;
}


int main() {
    // Test decimalToBinary function
    int decimalNum = 75;
    std::string binaryResult = decimalToBinary(decimalNum);
    std::cout << "Decimal " << decimalNum << " in binary: " << binaryResult << std::endl;
    return 0;
}