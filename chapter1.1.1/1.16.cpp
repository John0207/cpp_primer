// write a program that prints a set of integers read from cinn

#include <iostream>

using namespace std;

int main()
{
    int val, sum = 0;
    std::cout << "Please enter a random amount of numbers to be summed:" << std::endl;
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "the sum of those numbers is: " << sum << std::endl;
    return 0;
}