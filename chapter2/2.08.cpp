// using escape sequences, write a program to print 2M followed by a new line
// modify the program to print 2, then a tab, then an M, followed by a new line

#include <iostream>

int main()
{
    // prints 2M
    // std::cout << 2 << '\115' << std::endl;

    std::cout << 2 << '\t' << '\115' << '\n'
              << std::endl;

    return 0;
}