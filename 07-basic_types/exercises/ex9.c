#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1, j = 3;
  
  printf("result: %d\ntype size: %zu\n", i / j + 'a', sizeof(i / j + 'a')); /* result is an int */
  printf("int size: %zu\n", sizeof(int));
  
  return EXIT_SUCCESS;
}
