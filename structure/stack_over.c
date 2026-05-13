#include <stdio.h>
#include <stdint.h>

void recursive(int count, char *first_frame_addr);

int main() {
    recursive(1, NULL);
    return 0;
}

void recursive(int count, char *first_frame_addr) {
    char frame_marker = 0;

    if (count == 1) {
        first_frame_addr = &frame_marker;
        printf("recursive call idx %d\n", count);
        recursive(count + 1, first_frame_addr);
    } else {
        ptrdiff_t bytes_used = first_frame_addr - &frame_marker;
        printf("recursive call idx %d, stack used: %td bytes\n", count, bytes_used);

        // smaller buffer so we can see many iterations before overflow
        char buffer[4096];
        recursive(count + 1, first_frame_addr);
    }
}
