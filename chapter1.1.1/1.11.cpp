// ex.1.11 write a program that prompts the user for two numbers and prints the range between them
#include <iostream>

using namespace std;

int main()
{
    int x, y, i = 0, range, low, high;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> x >> y;
    if (x > y)
    {
        high = x - 1;
        low = y + 1;
    }
    else
    {
        high = y - 1;
        low = x + 1;
    }
    range = high - low;
    while (i <= range)
    {
        std::cout << low << std::endl;
        ++low;
        ++i;
    }
    return 0;
}