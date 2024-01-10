#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  float e = 1.0f, fact = 1.0f, epsilon;

  printf("Enter episilon: ");
  scanf("%f", &epsilon);

  for (int i = 1; epsilon > e; i++) {
    fact *= i;
    e += 1.0f / fact;
  }

  printf("e approximate: %f\n", e);

  return EXIT_SUCCESS;
}

// TODO: can't figure out loop condition yet
