
#include <iostream>

using namespace std;

int main()
{
    int val = 0, currVal = 0;
    std::cout << "Please enter a random amount of numbers: " << std::endl;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}