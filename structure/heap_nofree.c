#include <stdio.h>
#include <stdlib.h>
int* allocate_mem(size_t size) {
    int *ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}
int main() {
    int *memory = allocate_mem(1000);
    while (1) {
        memory = allocate_mem(1000);
    }
    return EXIT_SUCCESS;
}