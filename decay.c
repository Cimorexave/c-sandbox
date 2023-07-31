#include <stdio.h>

void decay_func(int top)
{
    printf("%i\n", top);
    if (top > 0)
        decay_func(--top);
}

int main()
{
    decay_func(10);

    return 0;
}