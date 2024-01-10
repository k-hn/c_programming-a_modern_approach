#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 9834;
    printf("%d ", i);
    
    for (i = i / 10; i > 0; i = i / 10) {
        printf("%d ", i);
    }
    printf("\n");

    
    return EXIT_SUCCESS;
}