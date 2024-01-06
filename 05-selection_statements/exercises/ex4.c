#include <stdio.h>
#include <stdlib.h>

/**
 * i < j = -1
 * i > j = 1
 * i = j = 0
 */
int get_ordering(int i, int j) {
  return i < j ? -1 : (i > j ? 1 : 0);
}

int main(void) {
  int i, j;

  /* i < j */
  i = 1, j = 2;
  printf("i < j: %d\n", get_ordering(i, j));

  /* i > j */
  i = 2, j = 1;
  printf("i > j: %d\n", get_ordering(i, j));

  /* i = j */
  i = 1, j = 1;
  printf("i = j: %d\n", get_ordering(i, j));
  
  return EXIT_SUCCESS;
}
