#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, sum = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  scanf("%d", &n);
  while (n != 0) {
    sum += n;
    scanf("%d", &n);
  }

  /* do { */
  /*   scanf("%d", &n); */
  /*   sum += n; */
  /* } while (n != 0); */
  
  printf("The sum is: %d\n", sum);
  
  return EXIT_SUCCESS;
}
