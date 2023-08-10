#include <math.h>
#include <stdio.h>
int bin_to_int(int binary_digits[], int number_of_digits) {
    int integer = 0;
    int power = 0;
    for (int i=(number_of_digits-1);i>=0;i--) {
        integer = integer + binary_digits[i]* pow(2,power);
        power = power + 1;
    }
    return integer;

    //binaryNumber = "";
    //while (decimal > 0) {
      //  int remainder = decimal % 2;
        //binaryNumber = std::to_string(remainder) + binaryNumber;
        //decimal = decimal / 2;
   // }
   //return binaryNumber;
}


//int main() {
    // Test decimalToBinary function
    //int decimalNum = 75;
    //std::string binaryResult = decimalToBinary(decimalNum);
   //std::cout << "Decimal " << decimalNum << " in binary: " << binaryResult << std::endl;
    //return 0;
//}