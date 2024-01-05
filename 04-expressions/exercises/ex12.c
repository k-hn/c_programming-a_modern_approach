#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j;

  /* a */
  i = 5;
  j = ++i * 3 - 2;
  printf("%d %d\n", i, j);	/* Output: 6 16 */

  /* b */
  i = 5;
  j = 3 * --i * 2;
  printf("%d %d\n", i, j);	/* Output: 4 24 */

  /* c */
  i = 7;
  j = 3 * i-- + 2;
  printf("%d %d\n", i, j);	/* Output: 6 23 */

  /* d */
  i = 7;
  j = 3 + --i * 2;
  printf("%d %d\n", i, j);	/* Output: 6 15 */
  
  return EXIT_SUCCESS;
}
