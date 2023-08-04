#include<iostream>
using namespace std;
int sum_if_palindrome(int integers[], int length);
int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int integers[100]; //  maximum array size of 100 
    cout << "Enter the array elements: ";
    for (int i = 0; i < length; i++) {
        cin >> integers[i];
    }

    int result = sum_if_palindrome(integers, length);
    cout<<result<<endl;
    return 0;
}