#include <iostream>
int array_max(int integers[], int length) {
    if (length <=0) {
        return -1;
    }
    int max = integers[0];
    for (int i=0;i<length;i++) {
        if (integers[i]>max) {
            max = integers[i];
        }
    }
    return max;
}

int array_min(int integers[], int length) {
    if (length <=0) {
        return -1;
    }
    int min = integers[0];
    for (int i=0;i<length;i++) {
        if (integers[i]<min) {
            min = integers[i];
        }
    }
    return min;
}

int sum_min_max(int integers[], int length) {
    
    int max = array_max(integers, length);
    int min = array_min(integers, length);

    if (max == -1 || min == -1) {
        return -1;
    }
    int sum = max + min;

    return sum;
}