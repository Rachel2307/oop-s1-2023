#include <iostream>
using namespace std;
void changeValue(double* ptr);
int main() {
    double myDouble = 3.14;
    cout<<"Original value:"<<myDouble<<endl;
    changeValue(&myDouble);
    cout<<"Modifed value:"<<myDouble<<endl;
    return 0;
}