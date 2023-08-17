#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList copiedList;
    copiedList.numPeople = pl.numPeople;
    copiedList.people = new Person[pl.numPeople];

    for (int i=0;i<pl.numPeople;i++) {
        copiedList.people[i].name =  pl.people[i].name;
        copiedList.people[i].age =  pl.people[i].age;
    }
    return copiedList;

}