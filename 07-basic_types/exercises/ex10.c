#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  long int j = 2;
  unsigned int k = 3;

  printf("result: %d | size of result: %zu\n", i + (int) j * k, sizeof(i + (int) j * k));
  /* result is an unsigned int */

  return EXIT_SUCCESS;
}
