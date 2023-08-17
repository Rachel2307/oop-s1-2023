#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copiedList;
    copiedList.numPeople = pl.numPeople;
    copiedList.people = pl.people; // perfom shallow copy
    return copiedList;
}