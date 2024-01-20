#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  bool weekend[7] = {true, false, false, false, false, false, true};

  for (int i = 0; i < (int) (sizeof(weekend) / sizeof(weekend[0])); i++) {
    printf("Index %d: %s\n", i, weekend[i] ? "true" : "false");
  }

  return EXIT_SUCCESS;
}
