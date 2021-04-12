// ex. 1.4: write a program to use multiplication operator
#include <iostream>

using namespace std;

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The value of " << v1 << " multiplied by " << v2 << " is " << v1 * v2 << std::endl;
    return 0;
}