#ifndef STORE_H
#define STORE_H
#include <string>
#include "StockItem.h"
using namespace std;
class Store {
private:
    int max_items;
    int current_items;
    StockItem* items;
public:
    Store();           // default constructor
    
    // constructor for a store that can have up to capacity number of items
    Store(int capacity); 

    // returns the number items currently stocked
    // note that if more than one of the same item is in stock they are *all* counted
    // i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
    int get_Total_Stock_Count(); 

    // returns the total count of items in stock with the given item code
    // i.e. if there are 3 widgets (with the given item_code in stock then it will return 3.
    int get_Stock_Count(int item_code);

    // returns the array of all items in stock. 
    // i.e. if there are 3 widgets and 2 hammers then the returned array will have 5 items.
    StockItem *get_Stock_List();

    // returns true and adds new_stock to the store if the store has enough capacity
    // otherwise returns false
    bool add_Stock(StockItem new_stock);

    ~Store();

};
#endif