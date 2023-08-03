#include <stdio.h>
#include <stdbool.h>

int length(int *arr)
{
    bool condition = true;
    int i = 0;

    while (condition)
    {
        if (arr[i] == 0)
            condition = false;
        printf("arr[i]: %i\n", arr[i]);
        i++;
    }

    return i;
}

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    int *p = numbers;

    printf("length of numbers: %i\n", length(p));

    return 0;
}