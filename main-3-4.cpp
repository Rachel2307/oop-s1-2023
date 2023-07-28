#include <iostream>
using namespace std;
void print_pass_fail(char grade);
int main() {
    char grade = 'A';
    print_pass_fail(grade); // Output: Pass

    grade = 'D';
    print_pass_fail(grade); // Output: Fail

    grade = 'F';
    print_pass_fail(grade); // Output: Nothing

    return 0;
}