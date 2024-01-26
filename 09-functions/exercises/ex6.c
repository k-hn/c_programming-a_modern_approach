#include <stdio.h>
#include <stdlib.h>

int digit(int n, int k) {
  int i = 1;
  while (i < k) {
    n /= 10;
    i++;
  }

  return n % 10;
}

int rec_digit(int n, int k) {
  if (k <= 1) {
    return n % 10;
  } else {
    return rec_digit(n / 10, k - 1);
  }
}

int main(void) {
  int n;
  int k;
  
  printf("Returns the kth digit(from the right) in n.\n");
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter k: ");
  scanf("%d", &k);

  printf("Kth digit is: %d\n", digit(n, k));
  printf("Kth digit is: %d\n", rec_digit(n, k));
}
