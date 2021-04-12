// ex 1.08 indicate if any which of the folowing statments are incorrect

#include <iostream>

using namespace std;

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    /* the first two are legal as the comment characters are defined as strings
    * the last two statments are not because they comment out portions of code which
    * leads to an illegal statement */
    std::cout << /* "*/ " */;
        std::cout
              << /* "*/ " /* " /*" */;
}