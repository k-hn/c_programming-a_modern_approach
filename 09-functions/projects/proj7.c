#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);

int main(void) {
  int base, exponent;

  printf("Enter base: ");
  scanf("%d", &base);
  printf("Enter exponent: ");
  scanf("%d", &exponent);

  printf("Result: %d\n", power(base, exponent));

  return EXIT_SUCCESS;
}

int power(int base, int exponent) {
  if (exponent == 0) {
    return 1;
  } else if(exponent % 2 == 0) {
    return power(base, exponent/2) * power(base, exponent/2);
  }
  else {
    return base * power(base, exponent - 1);
  }
}
