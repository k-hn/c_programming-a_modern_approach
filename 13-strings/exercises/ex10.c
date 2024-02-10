#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *p) {
  /* q is undefined and so strcpy copies to an unknown location */
  char *q = "initial";

  strcpy(q, p);
  return q;
}

int main(void) {
  char s[20] = "hey there";
  char *res;
  res = duplicate(s);
  
  printf("Result: %s\n", duplicate(s));

  return EXIT_SUCCESS;
}
