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

void copy_str(char *str, char *copy)
{
    // copy[50];

    int i = 0;
    while (str[i] != 0)
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = 0;
}

char *concat_str(char *first, char *second)
{
    char result[50];
    char *result_p = result;

    int i = 0;

    while (first[i] != 0)
    {
        result[i] = first[i];
        i++;
    }

    int j = 0;
    while (second[j] != 0)
    {
        result[i] = second[j];
        j++;
        i++;
    }

    result[i] = 0;

    // printf("result is %s", result);
    // printf("result_p is %s", result_p);
    printf("result_p is: %p\n", result_p); // 0061FE62
    printf("result_p is: %s\n", result_p); // hey there

    return result_p;
}

int main()
{

    // char *my_str = "Hello There";

    // printf("the string \"%s\"'s length is: %i\n", my_str, str_length(my_str));
    // printf("the string \"%s\"'s length is: %i\n", my_str, strlen(my_str)); // doesn't consider the 0 char at the end of the string

    // char *my_str2 = "sina";
    // char my_str2_copy[5];

    // copy_str(my_str2, my_str2_copy);
    // printf("copy of my_str2: %s is: %s\n", my_str2, my_str2_copy);

    // char *str = "a string";
    // printf("%s\n", str);

    char *str1 = "hey ";
    char *str2 = "there!";

    char emp[50];
    char *concats = emp;
    concats = concat_str(str1, str2);
    // printf("length of concat result: %d\n", strlen(concats));
    // printf("sizeof of concat result: %zu\n", sizeof(concats));

    // for (int i = 0; i < strlen(concats); i++)
    // {
    //     printf("%c", concats[i]);
    // }

    printf("concatenated result is: %p\n", concats); // 0061FE62
    printf("concatenated result is: %s\n", concats); // a

    return 0;
}