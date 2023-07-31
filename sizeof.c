#include <stdio.h>

void main()
{
    int my_int;
    float my_float;
    double my_double;
    char my_char;

    printf("the size of int: %zu \n", sizeof(my_int));       // 4
    printf("the size of float: %zu \n", sizeof(my_float));   // 4
    printf("the size of double: %zu \n", sizeof(my_double)); // 8
    printf("the size of char: %zu \n", sizeof(my_char));     // 1

    my_int = 0;
    my_float = 0.0;
    my_double = 0.0000;
    my_char = 'a';

    printf("the size of int: %zu \n", sizeof(my_int));       // 4
    printf("the size of float: %zu \n", sizeof(my_float));   // 4
    printf("the size of double: %zu \n", sizeof(my_double)); // 8
    printf("the size of char: %zu \n", sizeof(my_char));     // 1
}