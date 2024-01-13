#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* a */
  printf("%d\n", 077);		/* Output: 7 * 8^1 + 7 * 8^0 = 63 */

  /* b */
  printf("%d\n", 0x77);		/* Output:  7 * 16^1 + 7 * 16^0 = 119*/

  /* c */
  printf("%d\n", 0XABC);	/* Output: 10 * 16^2 + 11 * 16^1 + 12 * 16^0 = 2749 */

  return EXIT_SUCCESS;
}
