#include <stdio.h>
#include <stdbool.h>

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

    printf("the string \"%c\"'s length is: %i\n", *my_str, str_length(my_str));

    return 0;
}