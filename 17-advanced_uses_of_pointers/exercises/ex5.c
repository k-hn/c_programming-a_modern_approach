#include <stdlib.h>
struct {
  union {
    char a, b;
    int c;
  } d;
  int e[5];
} f, *p = &f;

int main(void)
{
  /* a */
  p->b = ' ';			/* Illegal: No field `b` directly after p */

  /* b */
  p->e[3] = 10;			/* Legal */

  /* c */
  (*p).d.a = '*';		/* Legal */

  /* d */
  p->d->c = 20;			/* Illegal: d is not a pointer and so `->` is illegal */

  return EXIT_SUCCESS;
}
