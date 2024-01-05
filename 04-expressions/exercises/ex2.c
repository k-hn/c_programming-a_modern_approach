#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* does (-i)/j and -(i/j) always have the same value? Yes */

  /* Justification */
  int i = 4;
  int j = 2;

  printf("%d\n", (-i)/j);
  printf("%d\n", -(i/j));
  
  return EXIT_SUCCESS;
}
