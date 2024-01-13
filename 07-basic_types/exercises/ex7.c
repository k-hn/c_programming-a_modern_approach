#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* a */
  printf("\010");		/* Octal for \b */

  /* b */
  printf("\012");			/* Octal for \n */

  /* c */
  printf("\015");			/* Octal for \r */

  /* d */
  printf("\011");			/* Ocatla for \t */


  return EXIT_SUCCESS;
}
