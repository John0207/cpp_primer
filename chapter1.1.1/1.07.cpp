// ex. 1.07 compile a program that has incorrextly nested comments
#include <iostream>

using namespace std;
/*
these comments are not nested correctly
/*these comments are not nested correctly*/
these comments are not nested correctly
these comments are not nested correctly
*/


int main()
{
    cout << "Hello World" << endl;
}