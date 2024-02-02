#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &a[1], *q = &a[5];

  /* a */
  printf("Value of *(p+3): %d\n", *(p + 3)); /* Value: 14 */

  /* b */
  printf("Value of *(q-3): %d\n", *(q - 3)); /* Value: 34 */

  /* c */
  printf("Value of q - p: %ld\n", q - p); /* Value: 4 */

  /* d */
  printf("Value of p < q: %d\n", p < q); /* Value: 1(true) */

  /* e */
  printf("Value of *p < *q: %d\n", *p < *q); /* Value: 0(false) */

  return EXIT_SUCCESS;
}
