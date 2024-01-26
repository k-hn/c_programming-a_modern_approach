#include <stdio.h>
#include <stdlib.h>

void print_count(int n) {
  printf("T minux %d and counting\n", n);
}

int main(void) {
  int i;

  for (i = 10; i > 0; --i) {
    print_count(i);
  }

  return EXIT_SUCCESS;
}
