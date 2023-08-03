#include <stdio.h>

int main()
{
    char name[] = "sina sadeqi";
    char *name_p = name;
    char *name_pel = &name[0];

    printf("name is: %s\n", name);
    printf("name_p is: %s\n", name_p);
    printf("name_pel is: %s\n", name_pel);
    // printf("name_p value is: %s\n", *name_p);

    printf("firs char of name address is: %p\n", &name);
    printf("name is: %p\n", name_p);

    printf("first char of name: %c\n", name[0]);
    printf("name_p[0]: %c\n", name_p[0]);

    return 0;
}