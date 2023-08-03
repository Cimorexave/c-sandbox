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

size_t length_arr(int *arr)
{
    size_t length = 0;

    while (arr[length] != 0)
    {
        length++;
    }

    return length;
}

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    int *p = numbers;

    // printf("length of numbers: %i\n", length(p));
    printf("length of numbers: %zu\n", length_arr(numbers));

    return 0;
}