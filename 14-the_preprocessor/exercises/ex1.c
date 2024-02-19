#include <stdio.h>
#include <stdlib.h>

/* a */
#define CUBE(x) (x * x * x)

/* b */
#define REM(n) (n % 4)

/* c */
#define IS_LESS_100(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(void) {
  printf("Cube of %d: %d\n", 3, CUBE(3));
  printf("Remainder of %d/4: %d\n", 5, REM(5));
  printf("%d * %d < 100: %d\n", 2, 3, IS_LESS_100(2, 3));
    printf("%d * %d < 100: %d\n", 50, 3, IS_LESS_100(50, 3));
  return EXIT_SUCCESS;
}
