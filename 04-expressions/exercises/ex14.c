#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c, d, e;
  a = 1; b = 2; c = 3; d = 4; e = 5;

  /* a */
  /* (((a * b) - (c * d)) + e) */
  printf("%d\n", a * b - c * d + e); /* Output: -5 */

  /* b */
  /* (((a / b) % c) / d) */
  printf("%d\n", a / b % c / d); /* Output: 0 */

  /* c */
  /* (((-a) - b) + c) - (+d) */
  printf("%d\n", - a - b + c - + d);

  /* d */
  /* ((a * (-b)) / c) - d */
  printf("%d\n",  a * - b / c - d); /* Output: -4 */
  
  return EXIT_SUCCESS;
}
