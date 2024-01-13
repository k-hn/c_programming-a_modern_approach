#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* a */
  printf("%d\n", 'A');		/* legal */

  /* b */
  printf("%d\n", 0b1000001);	/* legal */

  /* c */
  printf("%d\n", 0101);		/* legal */

  /* d */
  printf("%d\n", 0x41);		/* legal */

  return EXIT_SUCCESS;
}
