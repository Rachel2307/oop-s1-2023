int sum_diagonal(int array[4][4]) {
    // assign sum to 0
    int sumDiagonal= 0;
    // calculate sum of the diagonal elements
    for (int i=0;i<4;i++) {
        sumDiagonal = sumDiagonal + array[i][i];
    }
    return sumDiagonal;
}