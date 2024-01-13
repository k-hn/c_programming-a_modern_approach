#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* a */
  printf("\x9");		/* Octal for \b */

  /* b */
  printf("\xA");			/* Octal for \n */

  /* c */
  printf("\xD");			/* Octal for \r */

  /* d */
  printf("\x9");			/* Ocatla for \t */


  return EXIT_SUCCESS;
}
