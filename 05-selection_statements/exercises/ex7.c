#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;

  /* a */
  i = 17;
  printf("%d\n", i >= 0 ? i : -i); /* Output: 17 */

  /* b */
  i = -17;
  printf("%d\n", i >= 0 ? i : -i); /* Output: 17 */

  return EXIT_SUCCESS;
}
