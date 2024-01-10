/* Prints a table of squares using a while statement */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, i = 1;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  while (i <= n) {
    printf("%10d%10d\n", i, i * i);
    i++;
  }

  return EXIT_SUCCESS;
}
