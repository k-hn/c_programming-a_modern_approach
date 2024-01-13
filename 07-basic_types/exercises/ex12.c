#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  float f = 1.0f;
  double d = i + f;

  printf("result = %f | sizeof calculation: %zu\n", i + f, sizeof(i + f)); /* result is float */
  printf("d = %f | sizeof d: %zu\n", d, sizeof(d)); /* result converted from float to double due to d */


  return EXIT_SUCCESS;
}
