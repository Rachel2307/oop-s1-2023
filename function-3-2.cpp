int median_array(int array[], int n) {
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
int median=0;
if ((n%2)==0){
    median= (sortedarray[n/ 2] + sortedarray[(n / 2) - 1]) / 2;
}
else {
    median=sortedarray[n / 2];
}
return median;
}