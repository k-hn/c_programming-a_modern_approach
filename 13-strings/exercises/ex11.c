#include <stdio.h>
#include <stdlib.h>
int my_strcmp(char *s, char *t) {
  char *ptr_s;
  char *ptr_t;

  for (ptr_s = s, ptr_t = t; *ptr_s == *ptr_t; ptr_s++, ptr_t++) {
    if (*ptr_s == '\0') {
      return 0;
    }
  }

  return *ptr_s - *ptr_t;
}

int main(void) {
  char *first = "computer";
  char *second = "science";

  printf("Result: %d\n", my_strcmp(first, second));

  return EXIT_SUCCESS;
}
