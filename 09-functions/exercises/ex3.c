#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n) {
  if (n == 0) {
    return m;
  } else {
    return gcd(n, m % n);
  }
}

int main(void) {
  int m, n;
  
  printf("Enter m: ");
  scanf("%d", &m);
  printf("Enter n: ");
  scanf("%d", &n);

  printf("GCD: %d\n", gcd(m, n));
  
  exit(EXIT_SUCCESS);
}
