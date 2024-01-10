#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;

  for (;;) {
    printf("Enter a number (enter 0 to stop): ");
    scanf("%d", &n);
    if (n == 0) {
      break;
    }

    printf("%d^3 = %d\n", n, n * n * n);
  }

  return EXIT_SUCCESS;
}
