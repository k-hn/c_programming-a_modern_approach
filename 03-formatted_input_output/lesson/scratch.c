#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int i, j;
  float x, y;
  
  /* scanf("%d%d%f%f", &i, &j, &x, &y); */
  /* printf("i: %d, j: %d\nx: %f, y: %f\n", i, j, x, y); */

  scanf("%d/%d", &i, &j);
  printf("i: %d, j: %d\n", i, j);
  return EXIT_SUCCESS;
}
