// ex. 1.5: rewrite the program to use a seperate statment to print each operand
#include <iostream>

using namespace std;

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The value of " << v1;
    std::cout << " multiplied by " << v2;
    std::cout << " is " << v1 * v2 << std::endl;
    return 0;
}