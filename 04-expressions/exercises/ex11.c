#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, k;

  /* a */
  i = 1;
  printf("%d ", i++ - 1);	/* Output: 0 */
  printf("%d\n", i);		/* Output: 2 */

  /* b */
  i = 10; j =  5;
  printf("%d ", i++ - ++j);	/* Output: 4 */
  printf("%d %d\n", i, j);	/* Output: 11 6 */

  /* c */
  i = 7; j = 8;
  printf("%d ", i++ - --j);
  printf("%d %d\n", i, j);
  

  /* d */
  i = 3; j = 4; k = 5;
  printf("%d ", i++ - j++ + --k); /* Output: 5 */
  printf("%d %d %d\n", i, j, k);  /* 4 5 6 */
  
  return EXIT_SUCCESS;
}
