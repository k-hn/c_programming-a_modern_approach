#include <stdio.h>
#include <stdlib.h>


int main(void) {
    for (int i = 1; i <= 128; i = i * 2) {
        printf("%d ", i);
    }
    printf("\n");

    return EXIT_SUCCESS;
}