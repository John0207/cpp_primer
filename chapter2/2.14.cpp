// is the following program legal and if so what are the printed values?

#include <iostream>

int i = 100, sum = 0;

int main()
{
    for (int i = 0; i != 10; ++i)
        sum += 1;
    std::cout << i << " " << sum << std::endl;
}

// output is 100 10