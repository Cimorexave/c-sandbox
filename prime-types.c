#include <stdio.h>

int add2(int first, int second)
{
    return first + second;
}

void do_nothing()
{
    printf("\n not doing anything... \n");
}

float add2_f(float one, float two)
{
    return one + two;
}

double add2_d(float one, float two)
{
    return one + two;
}

void main()
{
    printf("starting... \n");

    // printf("the sum of 2 and 5 is %i \n", add2(2, 5));

    // do_nothing();

    // printf("the sum of 2 and 5 is %i \n", add2_f(2.0, 5.0));

    // printf("the sum of 2 and 5 is %i \n", add2_d(2, 5));
}