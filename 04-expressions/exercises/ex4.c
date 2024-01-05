#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("%d\n", 8 / 5); 	/* Output: 1 */
  printf("%d\n", -8 / 5); 	/* Output: -1 */
  printf("%d\n", 8 / -5);	/* Output: -1 */
  printf("%d\n", -8 / -5);	/* Output: 1 */

  return EXIT_SUCCESS;
}
