#include <iostream>
using namespace std;
int palindrome_sum(int integers[], int length);
bool is_array_palindrome(int integers[], int length);
int sum_integers(int integers[], int length);
int main() {
    int arrays[6] = {1,2,0,0,2,1};
    int size = 6;
    cout<<palindrome_sum(arrays,size)<<endl;
}
