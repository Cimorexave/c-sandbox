#include <stdio.h>

int add_numbers(int a, int b);
void f1();

int main() {
    printf("HEY");
    add_numbers(1,2);
    // void *f1p = &f1;
    // printf("f1p: %p\n", f1p);

    // int *anp = &add_numbers(1,1);
    // printf("anp: %p\n", anp);
    return 0;
}

int add_numbers(int a, int b) {
    int sum;
    sum = a + b;
    return sum; // Returns the calculated sum
}