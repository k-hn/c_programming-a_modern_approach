#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int i, j, k;

  /* a */
  i = 7;
  j = 8;
  i *= j + 1;
  printf("%d %d\n", i, j);	/* Output: 63 8 */

  /* b */
  i = j = k = 1;
  i += j += k;
  printf("%d %d %d\n", i, j, k);	/* Output: 3 2 1 */

  /* c */
  i = 1; j = 2; k = 3;
  i -= j -= k;
  printf("%d %d %d\n", i, j, k);	/* Output: 2 -1 3 */

  /* d */
  i = 2; j = 1; k = 0;
  i *= j *= k;
  printf("%d %d %d\n", i, j, k);	/* Output: 0 0 0 */

  return EXIT_SUCCESS;
}
