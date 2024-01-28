#include <stdio.h>
#include <stdlib.h>

int solve_polynomial(int x);
int power(int base, int exponent);

int main(void) {
  int x;
  
  printf("Solves the equation 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.\n");
  printf("Enter x: ");
  scanf("%d", &x);
  
  printf("Result: %d\n", solve_polynomial(x));
  
  return EXIT_SUCCESS;
}

int power(int base, int exponent) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }

  return result;
}

int solve_polynomial(int x) {
  return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - x * x + 7 * x - 6;
}
