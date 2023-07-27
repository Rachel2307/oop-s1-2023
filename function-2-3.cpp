 void two_five_nine(int array[], int n) {
    int count2=0,count5=0,count9=0;
    for (int i=0;i<n;i++) {
        switch(array[i]) {
            case 2:
                count2++;
                break;
            case 5:
                count5++;
                break;
            case 9:
                count9++;
                break;  
            default:
                break;
        }
    }
    // display the counts
    cout<<"2:"<<count2<<";"<<"5:"<<count5<<";"<<"9:"<<count9<<";";
 }