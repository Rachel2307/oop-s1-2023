bool is_fanarray(int array[], int n){
    bool left=true;
    bool right=true;
    for(int i=0; i<n/2; i++){
        if(array[i+1]<array[i]||array[i]!=array[n-i-1]){
            left=false;
        }
    }
    for(int i=n/2; i<n-1; i++){
        if(array[i+1]>array[i]){
            right=false;
        }
    }
    if(left==true&&right==true){
        return true;
    }
    else{
        return false;
    }
}