//write code to change the value of a pointer.
// write code to change the value to which the pointer points

#include <iostream>

int main()
{
    int i = 100, j = 150;
    int *p1 = &i, *p2 = p1;
    // changes value of pointer
    p1 = &i;
    // changes value of object pointer points to
    *p2 = j;

    return 0;
}
