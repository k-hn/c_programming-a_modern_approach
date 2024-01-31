#include <stdio.h>
#include <stdlib.h>

int get_gcd(int m, int n) {
  if (n == 0) {
    return m;
  } else {
    return get_gcd(n, m % n);
  }
}

int main(void) {
  int num, denom, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  gcd = get_gcd(num, denom);
  printf("%d/%d\n", num/gcd, denom/gcd);    

  return EXIT_SUCCESS;
}
