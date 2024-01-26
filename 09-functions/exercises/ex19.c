#include <stdio.h>

/* prints the binary representation of n */
void pb(int n) {
  if (n != 0) {
    pb(n / 2);
    putchar('0' + n % 2);
  }
}

int main(void) {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  pb(n);
  printf("\n");
}
