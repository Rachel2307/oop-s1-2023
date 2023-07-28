double sum_even(double array[], int n) {
    double sum= 0;
    for (int i=0;i<n;i++) {
        if (i%2==0) {
            sum = sum + array[i];
        }
    }
    return sum;
}