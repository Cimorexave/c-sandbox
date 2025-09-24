#include <stdlib.h>
#include <stdio.h>

int add_numbers(int , int);
void f1();
int sqf (int);

/* function pointers def */
typedef int (*sqfptr) (int);

/*calculator*/
typedef int (*OperationFunc)(int, int);

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

/*qsort */
int compare_integers(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;
    return (arg1 > arg2) - (arg1 < arg2);
}

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
     /* OR: */fptr = f1;
    printf("fptr after assignment: %p\n", fptr);

    fptr();

    return 0;
}

int add_numbers(int a, int b) {
    int sum;
    sum = a + b;
    return sum; // Returns the calculated sum
}

int sqf(int a) { return a ^ 2 ;}
void f1(){printf("F1 ---------"); return;}

void calc2() {
       // Array of function pointers
    OperationFunc ops[4] = {add, subtract, multiply, divide};

    int choice;
    int x = 10, y = 5;

    printf("Choose an operation:\n");
    printf("0: Add, \t1: Subtract, \t2: Multiply, \t3: Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Call the correct function from the array
    if (choice >= 0 && choice < 4) {
        int result = ops[choice](x, y);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return;
}

void myqsort() {
    int numbers[] = {4, 2, 8, 5, 1, 9, 3, 7, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Call qsort, passing our comparison function
    qsort(numbers, n, sizeof(int), compare_integers);

    printf("Sorted array:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return;
}