#include "StockItem.h"
using namespace std;

// a default constructor 
StockItem::StockItem() {
    description = "";
    code_num = 0;
}       

StockItem::StockItem(int code_num, string description) {
    this->code_num = code_num;
    this->description = description;
} 

string StockItem::get_description() {
    return description;
}

int StockItem::get_item_code() {
    return code_num;
}

//StockItem::~StockItem() {
   //delete[] StockItem();
//}