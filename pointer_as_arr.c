#include <stdio.h>

int main()
{
    int my_arr[] = {1, 2, 3};
    int *first_el = &my_arr[0];
    int *my_pointer_as_array = my_arr;
    int *unassigned_pointer;
    // my_pointer_as_array = {1, 2, 3};

    printf("my pointer %p\n", my_pointer_as_array);
    printf("unasssigned_pointer %p\n", unassigned_pointer);
    printf("value of unasssigned_pointer %i\n", *unassigned_pointer);
    printf("address of unasssigned_pointer %p\n", &unassigned_pointer);
    printf("*(unasssigned_pointer + 1) %i\n", *(unassigned_pointer + 1));
    printf("unasssigned_pointer[0] %i\n", unassigned_pointer[0]);
    printf("unasssigned_pointer[1] %i\n", unassigned_pointer[1]);

    printf("first_el: %i\n", *first_el);
    printf("first_el[0]: %i\n", first_el[0]);

    printf("pointer first el: %i\n", my_pointer_as_array[0]);
    printf("pointer first el: %i\n", *my_pointer_as_array);

    return 0;
}