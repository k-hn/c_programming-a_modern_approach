#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j;
  float x;

  scanf("%d%f%d", &i, &x, &j);
  printf("%d | %f | %d", i, x, j);

  return EXIT_SUCCESS;
}

/**
 * output : 10, 0.300000, 5
 * reads in 10, then .3 qualifies as a float, then 5. 6 is left out becuase the pattern has been matched
 */
