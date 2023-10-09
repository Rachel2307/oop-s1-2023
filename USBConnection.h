#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
private:
    int ID;

    // Private constructor to create USBConnection objects
    USBConnection(int id) : ID(id) {}

    // Static stack to keep track of available IDs
    static std::stack<int> ids;

public:
    // Public destructor to return the ID to the stack
    ~USBConnection() {
        if (ID >= 1 && ID <= 3) {
            ids.push(ID);
        }
    }

    // Static function to create USBConnection objects
    static USBConnection* CreateUsbConnection() {
        if (!ids.empty()) {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id);
        }
        return nullptr; // No more USB ports available
    }

    // Getter for ID
    int get_id() const {
        return ID;
    }
};

// Initialize the static stack with available IDs
std::stack<int> USBConnection::ids({1,2,3});

#endif // USBCONNECTION_H


