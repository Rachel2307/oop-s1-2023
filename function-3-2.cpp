#include <algorithm>

int median_array(int array[], int n) {
    // Return 0 if the size is even or less than 1
    if (n % 2 == 0 || n < 1) {
        return 0;
    }
// Sort the array
int temp=0;
int sortedarray[n];
for (int i=0;i<n;i++){
    sortedarray[i]=array[i];
}
for (int j=n-1;j>0;j--){
    for (int i=0;i<n;i++){
        if (sortedarray[i]>sortedarray[i+1]) {
            temp = sortedarray[i];
            sortedarray[i]=sortedarray[i+1];
            sortedarray[i+1]=temp;
        }
    }
}
// Find the middle index
int median = sortedarray[n/2];
// Return the median (middle element for odd size)
return median;
}