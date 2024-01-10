// Prints out the powers of 2

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 1;

    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");
    return EXIT_SUCCESS;
}