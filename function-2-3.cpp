#include <iostream>
// function to determine whether this is a palindrome matrix
bool is_palindrome(int integers[], int length) {
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
int sum_array_elements(int integers[], int length) {
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
int sum_if_palindrome (int integers[], int length) {
    if (length <=0) {
        return -1;
    }
    bool determine = is_palindrome(integers,length);
    if (determine == true) {
        return sum_array_elements(integers, length);
    } else {
        return -2;
    }
}