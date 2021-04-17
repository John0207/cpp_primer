// write a program that reads two sales item objects that have the same isbn and produces their sum

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn())
    {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "must have same isbn" << std::endl;
        return -1;
    }
}

// 0-456-46545-x 4 5.00
// 0-246-78345-x 4 20.00
// 0-204-45664-x 2 15.00
// 0-201-34567-x 1 10.00