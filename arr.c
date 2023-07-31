#include <stdio.h>

// int get_length_int_arr(int nums[])
// {
//     return sizeof(nums) / sizeof(nums[0]);
// }

// int length_of_int(int)

void main()
{
    int nums[10];

    printf("first of unassigned nums: %i \n", nums[0]);
    printf("last of unassigned nums: %i \n", nums[9]);
    printf("last + 1 of unassigned nums: %i \n", nums[10]);
    printf("sizeof nums: %zu\n", sizeof(nums));

    nums[0] = -1;
    nums[9] = -9;
    nums[10] = -50;
    nums[50] = -100;

    printf("first of unassigned nums: %i \n", nums[0]);
    printf("last of unassigned nums: %i \n", nums[9]);
    printf("last + 1 of unassigned nums: %i \n", nums[10]);
    printf("sizeof nums: %zu\n", sizeof(nums));

    int empts[0];
    printf("sizeof empts: %zu\n", sizeof(empts));

    empts[5] = 1;
    printf("value of empts[5]: %i\n", empts[5]);
    printf("sizeof empts: %zu\n", sizeof(empts));

    int empts_with_size[50];
    int empts_with_size_length = sizeof(empts_with_size) / empts_with_size[0];

    printf(" empts_with_size_length is: %i\n", empts_with_size_length);

    for (int i = 0; i < 50; i++)
    {
        printf("index %i of empts is %i\n", i, empts_with_size[i]);
    }

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("index %i of arr is %i\n", i, arr[i]);
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("index %i of arr is %i\n", i, arr[i]);
    // }

    /*
    conclusion: if you try to print the values of
    the array that are not in the range
    it will give you random values
    */

    // length counter
    int is_loop = 1;
    int iterator = 0;
    while (is_loop)
    {
        if (arr[iterator] == 0)
            is_loop = 0;
        else
            iterator++;
    }

    printf("length of arr is: %i", iterator);
}