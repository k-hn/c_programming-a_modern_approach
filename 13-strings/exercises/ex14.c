#include <stdio.h>

int main(void) {
  char s[] = "Hsjodi", *p;

  for (p = s; *p; p++) {
    --*p;
  }

  puts(s);
  return 0;
}


/* Changes each character in s to its preceeding character */
/* --*p --> --(*p) */
