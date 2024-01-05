#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  /* ++i == i += 1 */

  int i;
  i = 5;
  printf("(++i) == (i += 1): %s\n", ((++i) == (i += 1)) ? "true" : "false");

  i = 5;
  printf("(++i) == (i += 1): %s\n", ((i++) == (i += 1)) ? "true" : "false");

  return EXIT_SUCCESS;
}
