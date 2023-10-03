#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;
        // Test 1: Check the addition of two positive numbers
        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        // Test 2: Check the addition of a positive number and zero
        if (addition.add(5, 0) != 5) {
            std::cout << "Test 2 failed!" << std::endl;
        }

        // Test 3: Check the addition of two negative numbers
        if (addition.add(-3, -7) != -10) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
};