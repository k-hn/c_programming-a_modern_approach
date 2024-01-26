#include <stdio.h>
#include <stdlib.h>

int f(int a, int b) {}

int main(void) {
  int i;
  double x;

  /* a */
  i = f(83, 12);		/* Legal */

  /* b */
  x = f(83, 12);		/* Legal */

  /* c */
  i = f(3.15, 9.28);		/* Legal but a and b are truncated to int */

  /* d */
  x = f(3.15, 9.28);		/* Legal but a and b are truncated to int */

  /* e */
  f(83, 12);			/* Legal; return value is disposed */
  
  return EXIT_SUCCESS;
}
