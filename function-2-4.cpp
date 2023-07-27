bool is_ascending(int array[], int n) {
    int result = true;
    if(n <= 0) {
        result = false;
    }     
    for (int i=0;i<(n-1);i++){
        if (array[i] > array[i+1]) {
            result = false;
            break;
        }
    }
    return result;
}