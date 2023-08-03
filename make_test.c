#include <stdio.h>

int main(int argc, char **argv)
{
    char *msg = "";
    if (argc > 0)
        msg = argv[1];

    printf("message from cmd: \t %s \n", msg);
    return 0;
}