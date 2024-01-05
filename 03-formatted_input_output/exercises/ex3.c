#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int i, j, k;
  float x, y;

  scanf("%f, %f",  &x, &y);
  printf("%f, %f\n", x, y);

  return EXIT_SUCCESS;
}

/*
 * a) "%d" vs " %d" - equivalent
 * b) "%d-%d-%d" vs "%d -%d -%d" - equivalent
 * c) "%f" vs "%f " - not equivalent
 * d) "%f,%f" vs "%f, %f" - equivalent
 */
