#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat_strs(char *first, char *second)
{
    size_t concat_res_len = strlen(first) + strlen(second);
    char *out = (char *)malloc((concat_res_len + 1) * sizeof(char));

    int i = 0;

    while (first[i] != 0)
    {
        out[i] = first[i];
        i++;
    }

    int j = 0;
    while (second[j] != 0)
    {
        out[i] = second[j];
        j++;
        i++;
    }

    out[i] = 0;

    return out;
}

int main()
{
    char *concats = concat_strs("hello ", "there!");

    printf("results is: %s\n", concats);

    free(concats);
    return 0;
}