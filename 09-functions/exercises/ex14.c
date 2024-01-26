#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool has_zero(int a[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    if (a[i] == 0) {
      return true;
    }
  }

  return false;
}

int main(void) {
  int a[5] = {1, 2, 3, 0, 5};

  printf("Has zero: %d\n", has_zero(a, 5));

  return EXIT_SUCCESS;
}
