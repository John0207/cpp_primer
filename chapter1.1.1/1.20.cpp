// write a program using Sales-item.h to read a set of book sales transactions, writing each
// transaction to standard output

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 << item2 << std::endl;
    return 0;
}