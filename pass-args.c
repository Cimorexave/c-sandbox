#include <stdio.h>

void inc_by_values(int first, int second)
{
    first = first + 1;
    second = second + 1;
    // first++;
    // second++;
}

void inc_by_ref(int *first, int *second)
{
    *first = *first + 1;
    *second = *second + 1;
    // *first++;
    // *second++;
}

void evaluate(int first, int second)
{
    printf(first == 1 && second == 2 ? "values changed" : "values didn't change");
}

void main()
{

    int a = 1;
    int b = 2;

    // passing by values
    inc_by_values(a, b);
    printf("a is %i and b is %i\n", a, b);

    // evaluate(a, b);

    // passing by reference
    inc_by_ref(&a, &b);
    printf("a is %i and b is %i\n", a, b);

    // evaluate(a, b);

    return;
}