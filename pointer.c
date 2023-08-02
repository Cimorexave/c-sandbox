#include <stdio.h>

void main()
{
    // the value
    int x = 10;

    // the address of x
    &x;
    printf("the address of x: %p\n", &x);

    // the pointer (points to x)
    int *my_pointer = &x;

    // pointer itself printed has the address of the x (what it was assigned)
    printf("my pointer %p\n", my_pointer); // 0061FEC8

    // what it points to is the value of the x
    printf("my pointer %i\n", *my_pointer); // 10

    return;
}