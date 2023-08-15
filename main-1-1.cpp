int *readNumbers();
void printNumbers(int *numbers,int length);
int main() {
    int *numbers = readNumbers();
    printNumbers(numbers, 10);
    delete[] numbers; // Free the dynamically allocated memory
    return 0;
}