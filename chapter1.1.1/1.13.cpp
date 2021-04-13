// rewrite exercises 9+10 using for loops
// 9 program that uses a while loop to sum numbers from 50 to 100

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "sum of 50 to 100 inclusive is " << sum << std::endl;

    // ex.1.10 write a program that uses a while loop to decrement down from 10 printing the numbers each time
    for (int j = 10; j >= 0; --j)
    {
        std::cout << j << std::endl;
    }

    return 0;
}