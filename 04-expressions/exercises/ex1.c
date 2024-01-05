#include <stdio.h>
#include <stdlib.h>

int main (void) {

  /* a */
  int i = 5;
  int j = 3;
  printf("%d %d\n", i / j, i % j); /* Output: 1 2 */

  /* b */
  i = 2;
  j = 3;
  printf("%d\n", (i + 10) % j); 	/* Output: 0 */

  /* c */
  i = 7;
  j = 8;
  int k = 9;
  printf("%d\n", (i + 10) % k / j);  /* Output: 1 */

  i = 1;
  j = 2;
  k = 3;
  printf("%d\n", (i + 5) % (j + 2) / k); /* Output: 0 */
  return EXIT_SUCCESS;
}
