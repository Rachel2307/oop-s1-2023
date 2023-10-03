// InvoiceTest.h

#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here for the addServiceCost function
    }

    void testGetDollarsOwed() {
        {
            Invoice invoice("EFGH");

            // Test 3: Check initial dollars owed (should be 0)
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        // Add more test cases here for the getDollarsOwed function
    }

    void testGetInvoiceId() {
        {
            Invoice invoice("WXYZ");

            // Test 4: Check invoice ID
            if (invoice.getInvoiceId() != "WXYZ") {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }

        // Add more test cases here for the getInvoiceId function
    }

    // Add other test functions for other public functions of the Invoice class here
};

#endif
