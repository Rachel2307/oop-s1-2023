#include <iostream>
#include "StockItem.h"
#include "Store.h"
int main() {
// create an empty store
Store store(3);
// create some stock items
StockItem m1(52,"hammers");
StockItem m2(3,"shirt");
StockItem m3(7, "hammer");
StockItem m4(2,"shirt");

// add stockitems to the store
if (store.add_Stock(m1)) {
std::cout << "Added 1" << std::endl;
} else {
std::cout << "Could not add 1" << std::endl;
}
if (store.add_Stock(m2)) {
std::cout << "Added 2" << std::endl;
} else {
std::cout << "Could not add 2" << std::endl;
}
if (store.add_Stock(m3)) {
std::cout << "Added 3 " << std::endl;
} else {
std::cout << "Could not add 3" << std::endl;
}
if (store.add_Stock(m4)) {
std::cout << "Added 4 " << std::endl;
} else {
std::cout << "Could not add 4 " << std::endl;
}
// print the number of stock items in the store
std::cout << "The storre currently has " <<
store.get_Total_Stock_Count() << " stock items" << std::endl;
// check if orchestra has a specific instrument
std::cout << "The store has: " << store.get_Stock_Count("hammer")<< "hammers"<<std::endl;
// get the list of stock items in the store
StockItem *items = store.get_Stock_List();
// print the details of each musician
for (int i = 0; i < store.get_Total_Stock_Count(); i++) {
std::cout << "stock items " << i+1 << " has " << items[i].get_description()
<< " and has " << items[i].get_item_code() << "code" <<
std::endl;
}
return 0;
}