#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"

class Orchestra {
public:
    Orchestra();           // Default constructor
    Orchestra(int size);   // Constructor for an orchestra of given size

    int get_current_number_of_members();
    bool has_instrument(std::string instrument);
    Musician* get_members();
    bool add_musician(Musician new_musician);
    ~Orchestra();

private:
    int max_size;
    int current_size;
    Musician* members;
};

#endif // ORCHESTRA_H