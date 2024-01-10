/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  // i = 1;
  // odd = 3;
  // for (square = 1; i <= n; odd += 2) {
  //   printf("%10d%10d\n", i, square);
  //   ++i;
  //   square += odd;
  // }

  square = 1;
  odd = 3;
  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, square);
    square += odd;
    odd += 2;
  }

  return EXIT_SUCCESS;
}
