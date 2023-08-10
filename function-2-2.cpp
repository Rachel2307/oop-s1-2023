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
}