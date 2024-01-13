#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* a */
  printf("%f\n", 010E2);	/* Legal | Floating point */

  /* b */
  printf("%f\n", 32.1E+5);	/* Legal | Floating point*/

  /* c */
  //printf("%f\n", 0790);		/* Illegal | Integer: 9 invalid in octal notation. max is 7 */

  /* d */
  //printf("%d\n", 100_000);		/* Illegal | Integer: underscore is illegal */

  /* e */
  printf("%f\n", 3.978e-2);	/* Legal | Floating point */
  
  return EXIT_SUCCESS;
}
