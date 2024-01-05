#include <stdio.h>
#include <stdlib.h>

int n_multiple(int value, int n) {
  int result = 1;
  for (int i = 0; i < n; i++) {
    result = result * value;
  }

  return result;
}

int main(void) {
  int x;
  int result;
  printf("Enter value of x: ");
  scanf("%d", &x);

  result = 3 * n_multiple(x, 5) + 2 * n_multiple(x, 4) - 5 * n_multiple(x, 3) - (x * x) + 7 * x - 6;

  printf("%d\n", result);

  return EXIT_SUCCESS;
}
