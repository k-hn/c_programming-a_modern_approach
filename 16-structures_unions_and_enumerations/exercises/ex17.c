#include <stdio.h>
#include <stdlib.h>

enum {FALSE, TRUE} b;
int i;

int main(void)
{
  /* a */
  b = FALSE;			/* Legal and safe */

  /* b */
  b = i;			/* Legal but not always safe */

  /* c */
  b++;				/* Legal but not always safe */

  /* d */
  i = b;			/* Legal and safe */

  /* e */
  i = 2 * b + 1;		/* Legal and safe */

  return EXIT_SUCCESS;
}
