// Prints out the sequence 10, 5, 3, 1, 1

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 10; i >= 1; i /= 2) {
        printf("%d ", i++);
    }
    printf("\n");

    return EXIT_SUCCESS;
}