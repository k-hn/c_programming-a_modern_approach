#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x = 8.89;

  printf("|%-8.1f|\n", x);
  printf("|%10.6f|\n", x);
  printf("|%-8.3f|\n", x);
  printf("|%6.0f|\n", x);

  return EXIT_SUCCESS;
}
