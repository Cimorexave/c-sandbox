#include <stdio.h>

int add_numbers(int , int);
void f1();
int sqf (int);

/* function pointers def */
typedef int (*sqfptr) (int);

int main() {
    printf("INIT...\n");
    add_numbers(1,2);
    // void *f1p = &f1;
    // void (*f1p)() = &f1;
    // printf("f1p: %p\n", f1p);

    // int *anp = &add_numbers(1,1);
    int (*anp)(int,int) = &add_numbers;
    printf("anp: %p\n", anp);

    // sqfptr = &sqf;
    // printf("sqfptr: %p\n", sqfptr);
    
    int (*sqfptr2) (int) = &sqf;
    printf("sqfptr2: %p\n", sqfptr2);
    
    void  (*fptr)();
    printf("fptr: %p\n", fptr);
    fptr = &f1;
    printf("fptr after assignment: %p\n", fptr);

    return 0;
}

int add_numbers(int a, int b) {
    int sum;
    sum = a + b;
    return sum; // Returns the calculated sum
}

int sqf(int a) { return a ^ 2 ;}
void f1(){return;}