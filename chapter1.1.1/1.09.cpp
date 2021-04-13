// ex.1.09 program that uses a while loop to sum numbers from 50 to 100

#include <iostream>

using namespace std;

int main()
{
    int val = 50;
    int sum = 0;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << "sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}