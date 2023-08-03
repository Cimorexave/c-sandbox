#include <stdio.h>

int main(int argc, char **argv)
{
    printf("starting...\n");

    printf("number of args: %i\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argument %i is %s\n", i, argv[i]);
    }

    return 0;
}