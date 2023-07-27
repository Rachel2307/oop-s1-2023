bool is_fanarray(int array[], int n){
    bool a=true;
    bool b=true;
    for(int i=0; i<n/2; i++){
        if(array[i+1]<array[i]||array[i]!=array[n-i-1]){
            a=false;
        }
    }
    for(int i=n/2; i<n-1; i++){
        if(array[i+1]>array[i]){
            b=false;
        }
    }
    if(b==true&&a==true){
        return true;
    }
    else{
        return false;
    }
}