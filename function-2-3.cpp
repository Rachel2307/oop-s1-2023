#include <iostream>
// function to determine whether this is a palindrome matrix
bool is_array_palindrome(int integers[], int length) {
    if (length<=0) {
        return false;
    }
    int start = 0;
    int end = length-1;
    while (start < end) {
        if (integers[start]!=integers[end]) {
            return false;
        }
        start = start + 1;
        end = end - 1;
    }
    return true;
}

// sum all of the elements of array
int sum_integers(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    int sum = 0;
    for (int i=0;i<length;i++) {
        sum = sum + integers[i];
    }
    return sum;
}

// combine 2 separate array
int palindrome_sum (int integers[], int length) {
    if (length <=0) {
        return -1;
    }
    bool determine = is_array_palindrome(integers,length);
    if (determine == true) {
        return sum_integers(integers, length);
    } else {
        return -2;
    }
}