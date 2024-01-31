#include <stdio.h>
#include <stdlib.h>

void decomponse(double x, long *int_part, double *frac_part) {
  *int_part = (long) x;
  *frac_part = x - *int_part;
}

int main(void) {
  long int int_part = 0;
  double frac_part = 0.0;
  double input;

  printf("Enter a decimal: ");
  scanf("%lf", &input);

  decomponse(input, &int_part, &frac_part);
  
  printf("Int part: %ld | Fractional part: %g\n", int_part, frac_part);
  
  return EXIT_SUCCESS;
}
