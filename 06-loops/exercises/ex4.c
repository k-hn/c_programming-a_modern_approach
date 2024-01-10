#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for(int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 0; i < 10; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    for(int i = 0; i++ < 10;) {
        printf("%d ", i);
    }
    printf("\n");
    
    return EXIT_SUCCESS;
}

// last for loop is different from the rest