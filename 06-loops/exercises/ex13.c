#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, m;

  printf("Enter a number: ");
  scanf("%d", &m);

  for (n = 0; m > 0; m /= 2, n++) {}

  return EXIT_SUCCESS;
}
