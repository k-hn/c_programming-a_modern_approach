#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j;

  /* a */
  i = 1; j = 2;
  i += j;
  printf("%d %d\n", i, j);	/* Output: 3 2 */

  /* b */
  i = 1; j = 2;
  i--;
  printf("%d %d\n", i, j);	/* Output: 0 2 */

  /* c */
  i = 1; j = 2;
  i * j / i;
  printf("%d %d\n", i, j);	/* Output: 1 2 */

  /* d */
  i = 1; j = 2;
  i % ++j;
  printf("%d %d\n", i, j);	/* Output: 1 3 */
  
  return EXIT_SUCCESS;
}
