#include <stdio.h>
#include <stdbool.h>

int main()
{
    int my_arr[5] = {1, 2, 3, 4, 5};
    int *my_pointer = my_arr;

    printf("first element of my array: %i\n", my_arr[0]);

    printf("my pointer: %p\n", my_pointer);
    printf("my pointer + 1: %p\n", my_pointer + 1);

    printf("value of my pointer: %p\n", *my_pointer);
    printf("value of my pointer + 1: %p\n", *(my_pointer + 1));
    printf("value of my pointer + 1: %p\n", my_pointer[0]);

    // printf("size of my pointer + 1: %p\n", sizeof(my_pointer)); // 4 = sizeof int

    // printf("10th element of my array %i\n", my_arr[9]); // compiler should throw error
    // printf("my pointer value %i\n", *(my_pointer + 9)); // runtime error segmentation fault

    return 0;
}