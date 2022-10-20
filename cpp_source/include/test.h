#include <string.h>
#include <iostream>

#ifndef SALES_DATA_H
#define SALES_DATA_H 
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold=0;
    double revenue = 0.0;
};
#endif // !SALES_DATA_H


void test();
int bookSale();
void useString();
void hexChange();