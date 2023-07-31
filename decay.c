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

void say_hob(int hob)
{
    int i = 0;
    int condition = 1;
    while (condition)
    {
        if (i % hob == 0)
            printf("hob\n");
        else
            printf("%i\n", i);
        if (i == 100)
            condition = 0;
        i++;
    }
}

void find_mods(int mod)
{
    // int arr[];
    int size_of_mods_arr = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % mod == 0)
            size_of_mods_arr++;
        // arr[i] = i;
    }

    int arr[size_of_mods_arr];
    int counter = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % mod == 0)
            arr[++counter] = i;
        // size_of_mods_arr++;
    }

    for (int i = 0; i < size_of_mods_arr; i++)
    {
        printf("arr[%i]: %i\n", i, arr[i]);
    }
}

int main()
{
    // decay_func(10);

    // print_times(30);

    // say_hob(5);
    // say_hob(7);

    find_mods(5);

    return 0;
}