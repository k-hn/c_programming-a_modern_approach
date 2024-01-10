#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int d, n;

    printf("Enter a number to test: ");
    scanf("%d", &n);

    for (d = 2; (d * d) < n; d++) {
        if (n % d == 0) {
            printf("%d is divisible by %d\n", n, d);
            break;
        }
    }

    printf("%d is prime\n", n);

    return EXIT_SUCCESS;
}
