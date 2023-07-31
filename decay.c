#include <stdio.h>

void decay_func(int top)
{
    printf("%i\n", top);
    if (top > 0)
        decay_func(--top);
}

void print_times(int times)
{

    if (times > 0)
    {
        for (int i = 0; i < times; i++)
        {
            printf("*");
        }
        printf("\n");
        print_times(--times);
    }
}

int main()
{
    // decay_func(10);

    // print_times(30);

    return 0;
}