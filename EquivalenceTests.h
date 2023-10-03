// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixtureOfIntegers();
        testZeroes();
        testBigPositiveNumbers();
        testBigNegativeNumbers();
        testSpecialCases();
    }

private:
    void testPositiveIntegers() {
        Addition addition;

        // Test 1: Adding two positive integers
        if (addition.add(5, 10) != 15) {
            std::cout << "Test for positive integers failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;

        // Test 2: Adding two negative integers
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test for negative integers failed!" << std::endl;
        }
    }

    void testMixtureOfIntegers() {
        Addition addition;

        // Test 3: Adding a positive and a negative integer
        if (addition.add(5, -3) != 2) {
            std::cout << "Test for a mixture of integers failed!" << std::endl;
        }
    }

    void testZeroes() {
        Addition addition;

        // Test 4: Adding zero to a positive integer
        if (addition.add(5, 0) != 5) {
            std::cout << "Test for adding zero to a positive integer failed!" << std::endl;
        }

        // Test 5: Adding zero to a negative integer
        if (addition.add(-3, 0) != -3) {
            std::cout << "Test for adding zero to a negative integer failed!" << std::endl;
        }
    }

    void testBigPositiveNumbers() {
        Addition addition;

        // Test 6: Adding two big positive numbers
        if (addition.add(1000000, 2000000) != 3000000) {
            std::cout << "Test for big positive numbers failed!" << std::endl;
        }
    }

    void testBigNegativeNumbers() {
        Addition addition;

        // Test 7: Adding two big negative numbers
        if (addition.add(-1000000, -2000000) != -3000000) {
            std::cout << "Test for big negative numbers failed!" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;

        // Test 8: Adding 1 to 1 (special case)
        if (addition.add(1, 1) != 2) {
            std::cout << "Test for the special case 1+1 failed!" << std::endl;
        }

        // Test 9: Adding -1 to -1 (special case)
        if (addition.add(-1, -1) != -2) {
            std::cout << "Test for the special case -1-1 failed!" << std::endl;
        }
    }
};
