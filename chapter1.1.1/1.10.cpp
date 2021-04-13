// ex.1.10 write a program that uses a while loop to decrement down from 10 printing the numbers each time

#include <iostream>

using namespace std;

int main()
{
    int val = 10;
    while (val >= 0)
    {
        std::cout << val << std::endl;
        --val;
    }
    return 0;
}