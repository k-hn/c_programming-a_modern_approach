#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;
  int result;
  printf("Enter value of x: ");
  scanf("%d", &x);

  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("%d\n", result);

  return EXIT_SUCCESS;
}
