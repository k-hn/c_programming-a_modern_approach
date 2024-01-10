// Prints out the figues of a given number, dropping off the last figure till there's none left

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 9384;

    do {
        printf("%d ", i);
        i /= 10;
    } while(i > 0);
    
    printf("\n");
    return EXIT_SUCCESS;
}