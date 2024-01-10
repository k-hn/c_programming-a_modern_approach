#include <stdio.h>
#include <stdlib.h>

int get_gcd(int m, int n) {
  int result, remainder;

  if (n == 0) {
    return m;
  } else {
    // remainder = m % n;
    // m = n;
    // n = remainder;
    // get_gcd(m, n);
    get_gcd(n, m % n);
  }
}

int main(void) {
  int m, n, gcd;

  printf("Enter two integers: ");
  scanf("%d%d", &m, &n);

  gcd = get_gcd(m, n);
  printf("Greatest common divisor: %d\n", gcd);

  return EXIT_SUCCESS;
}

