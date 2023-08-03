#include <stdio.h>
#include <string.h>

// char allocator50[50];
// char al[50];

char *str_reverse(char *rev, char *str)
{

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        rev[strlen(str) - i] = str[i];
        // printf("%c\n", str[i]);
        // printf("%c\n", rev[strlen(str) - i]);
    }

    // printf("rev is %s\n", rev);
    // printf("length of rev is %i\n", strlen(rev));

    rev[strlen(str) + 1] = 0;

    return rev;
}

int main()
{
    char allocator50[50];
    // char al[50];

    char *original_str = "hello there!";

    char *reverse = allocator50;
    str_reverse(reverse, original_str);

    printf("reverse of %s is %s", original_str, reverse);

    return 0;
}