#include <iostream>
#include "StockItem.h"
using namespace std;
int main() {
    StockItem s1;
    cout<<"1. code num = "<<s1.get_item_code()<<", description = "<<s1.get_description()<<endl;
    StockItem s2(234,"t-shirt");
    cout<<"2. code num = "<<s2.get_item_code()<<", description = "<<s2.get_description()<<endl;
}