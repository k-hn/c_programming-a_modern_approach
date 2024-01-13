#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float f = -0.8;
  float frac_part = f - (int) f;

  printf("frac_part: %f\n", frac_part);

  return EXIT_SUCCESS;
}

/* works for positive and negative values of f */
/* fails if value f exceeds max value of int during casting */
