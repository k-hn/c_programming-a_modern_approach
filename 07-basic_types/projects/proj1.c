/* Prints a table of squares using a while statement */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int i = 1;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  printf("size of i: %zu\n", sizeof(i));

  while (i <= n) {
    printf("%10d\t%10d\n", i, i * i);
    i++;
  }

  return EXIT_SUCCESS;
}

/* Points of failurer */
/* int i -> 46341 */
/* short int i -> 32768 */
