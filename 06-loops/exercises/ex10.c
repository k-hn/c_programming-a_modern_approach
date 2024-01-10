#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count;

    // while loop to print odd numbers from 1-10
    count = 0;
    while (count < 10) {
        count++;
        if (count % 2 == 0) {
            continue;
        }
        printf("%d ", count);
        
    }
    printf("\n");

    // using goto statements
    count = 0;
    while(count < 10) {
        count++;
        if (count % 2 == 0) {
            goto end_of_loop;
        }
        printf("%d ", count);
        end_of_loop:
    }
    printf("\n");

    return EXIT_SUCCESS;
}