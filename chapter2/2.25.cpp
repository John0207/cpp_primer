// this should be a .txt.....
// Exercise 2.25: Determine the types and values of each of the following
// variables.
// (a) int* ip, &r = ip;
// (b) int i, *ip = 0;
// (c) int* ip, ip2;
// #include <iostream>

int main()
{
    // ip is a pointer to int of type int, r is reference to an int, initialized with ip
    int *ip, &r = ip;

    //unitialized int i, ip int pointer initialized to null, valid
    int i, *ip = 0;

    //*ip is pointer to int, ip2 is int
    int *ip, ip2;

    return 0;
}
