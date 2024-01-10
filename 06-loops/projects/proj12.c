#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int fact = 1;
  float e = 1.0f, current_term = 1.0f, epsilon;

  printf("Enter episilon: ");
  scanf("%f", &epsilon);

  for (int i = 1; current_term > epsilon; i++) {
    current_term = 1.0f / (fact *= i);
    e += current_term;
  }

  printf("e approximate: %f\n", e);

  return EXIT_SUCCESS;
}
