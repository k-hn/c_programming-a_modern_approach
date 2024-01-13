#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c;

  /* a */
  int i = 0;
  c = 'a';
  i += c;			/* legal */

  /* b */
  c = 'a';
  c = 2 * c - 1;		/* legal */

  /* c */
  c ='a';
  putchar(c);			/* legal */

  /* d */
  //printf(c);			/* illegal */
  
  return EXIT_SUCCESS;
}
