#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, k;

  /* a */
  i = 3; j = 4; k = 5;
  printf("%d ", i < j || ++j < k); /* Output: 1 */
  printf("%d %d %d\n", i, j, k);   /* Output: 3 4 5  - due to short-circuting j is 4*/

  /* b */
  i = 7; j = 7; k = 8;
  printf("%d ", i - 7 && j++ < k); /* Output: 0 */
  printf("%d %d %d\n", i, j, k);   /* Output: 7 7 8 */

  /* c */
  i = 7; j = 8; k = 9;
  printf("%d ", (i = j) || (j = k)); /* Output: 1 */
  printf("%d %d %d\n", i, j, k);     /* Output: 8 8 9 */

  /* d */
  i = 1; j = 1; k = 1;
  printf("%d ", ++i || ++j && ++k); /* Output: 1 */
  printf("%d %d %d\n", i, j, k);    /* Output: 2 1 1 */
  
  return EXIT_SUCCESS;
}
