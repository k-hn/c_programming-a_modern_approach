#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    
    // a
    i = 10;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // b
    i = 10;
    for (;i < 10;) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // c
    i = 10;
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);    
    printf("\n");

    return EXIT_SUCCESS;
}

// c is not equivalent to the others when i = 10;