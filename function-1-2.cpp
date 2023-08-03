int is_identity(int array[10][10]) {
    int determinant = 0;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if ((i==j) && array[i][j]!=1) {
                determinant=0;
                break;
            } else if ((i!=j) && array[i][j]!=0) {
                determinant=0;
                break;
            } else {
                determinant=1;
            }
        }
    }
    return determinant;
}