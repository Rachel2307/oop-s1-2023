#include<iostream>
using namespace std;
void print_binary_str(std::string decimal_number) {
    string str = "";
    int num = stoi(decimal_number);
    while(num>0){
        int r = num%2;
        str += r?'1':'0';
        num = num/2;
    }
    for(int i=str.size()-1; i>=0; i--) {
        cout<<str[i];
    }
    cout<<std::endl;
}
