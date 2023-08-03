#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int str_length(char *str)
{
    bool condition = true;
    int i = 0;

    while (condition)
    {
        if (str[i] == 0)
            condition = false;
        i++;
    }

    return i;
}

int main()
{

    char *my_str = "Hello There";

    printf("the string \"%s\"'s length is: %i\n", my_str, str_length(my_str));
    printf("the string \"%s\"'s length is: %i\n", my_str, strlen(my_str)); // doesn't consider the 0 char at the end of the string

    return 0;
}