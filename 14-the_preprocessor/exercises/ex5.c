#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void) {
  char *s;
  int i;

  /* a */
  strcpy(s, "abcd");
  i = 0;
  putchar(TOUPPER(s[++i]));

  /* b */
  strcpy(s, "0123");
  i = 0;
  putchar(TOUPPER(s[++i]));

  return EXIT_SUCCESS;
}
