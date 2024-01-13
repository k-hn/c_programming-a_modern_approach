#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;

  unsigned int z = 9;

  /* a */
  printf("c * i = %d | sizeof (c * i): %zu\n", c * i, sizeof(c * i)); /* value: -3 type: int */

  /* b */
  printf("s + m = %lu | sizeof (s + m): %zu\n", s + m, sizeof(s + m)); /* value: 7 type: long */

  /* c */
  printf("f / c = %f | sizeof (f / c): %zu\n", f / c, sizeof(f / c)); /* value: 6.500000 type: float */

  /* d */
  printf("d / s = %f | sizeof (d / s): %zu\n", d / s, sizeof(d / s)); /* value: 3.750000 type: double */

  /* e */
  printf("f - d = %f | sizeof (f - d): %zu\n", f - d, sizeof(f - d)); /* value: -1.000000 type: double*/

  /* f */
  printf("(int) f = %d | sizeof (int) d: %zu\n", (int) f, sizeof((int) f)); /* value: 6, type: int */

  return EXIT_SUCCESS;
}
