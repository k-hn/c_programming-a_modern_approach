#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  float f = 2.0f;
  double d = 3.0;

  printf("result: %f | size of result: %zu\n", i * f / d, sizeof(i * f / d));
  printf("sizeof float %zu | sizeof double: %zu\n", sizeof(float), sizeof(double));
  /* result is a double */

  
  return EXIT_SUCCESS;
}
