#include <stdio.h>

int add2(int first, int second)
{
    return first + second;
}

void do_nothing()
{
    printf("\n not doing anything... \n");
}

void main()
{
    printf("starting... \n");
    printf("the sum of 2 and 5 is %i", add2(2, 5));
    do_nothing();
    printf("the sum of 2 and 5 is %i", add2(2, 5));
}