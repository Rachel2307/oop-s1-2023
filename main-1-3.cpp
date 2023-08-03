#include<iostream>
using namespace std;
void count_digits(int array[4][4]);
int main() {
    int array[4][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    count_digits(array);
    return 0;
}