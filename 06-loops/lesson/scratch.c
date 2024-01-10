#include <stdio.h>
#include <stdlib.h>

int main(void) {

  for(int i = 0, j = 0; i < 10; i++, j++) {
    printf("i: %d | j: %d\n", i, j);
  }

  return EXIT_SUCCESS;
}
