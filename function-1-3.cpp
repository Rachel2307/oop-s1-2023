#include <iostream>
using namespace std;
void count_digits(int array[4][4]) {
    int count[10]={0};
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            switch (array[i][j]) {
                case 0:
                    count[0]=count[0]+1;
                    break;
                case 1:
                    count[1]=count[1]+1;
                    break;
                case 2:
                    count[2]=count[2]+1;
                    break;
                case 3:
                    count[3]=count[3]+1;
                    break;
                case 4:
                    count[4]=count[4]+1;
                    break;
                case 5:
                    count[5]=count[5]+1;
                    break;
                case 6:
                    count[6]=count[6]+1;
                    break;
                case 7:
                    count[7]=count[7]+1;
                    break;
                case 8:
                    count[8]=count[8]+1;
                    break;
                case 9:
                    count[9]=count[9]+1;
                    break;
            }
        }
    }
    for (int i=0;i<10;i++) {
        cout<<i<<":"<<count[i]<<";";
    }
    cout<<endl;
}