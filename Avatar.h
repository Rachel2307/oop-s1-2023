#ifndef AVATAR_H
#define AVATAR_H

#include "GridUnit.h"

class Avatar : public GridUnit {
public:
    Avatar(int x, int y) : GridUnit(x, y, 'A') {}

    void shift(int dx, int dy) {
        int currentX, currentY;
        std::tie(currentX, currentY) = getCoordinates();
        setCoordinates(currentX + dx, currentY + dy);
    }
};

#endif
