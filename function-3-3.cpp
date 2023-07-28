double weighted_average(int array[], int n) {
    double sum_weight=0.0;
    for (int i=0;i<n;i++) {
        int count = 0;
        // count number of elements appear in array
        for (int j=0;j<n;j++) {
            if (array[i] == array[j]) {
                count = count + 1;
            }
        }
        sum_weight = sum_weight + 1.0*array[i]*count/n;
    }
    return sum_weight;
}