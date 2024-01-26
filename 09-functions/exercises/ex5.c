#include <stdio.h>
#include <stdlib.h>

int num_digits(int n) {
  int count = 0;

  do {
    count += 1;
    n /= 10;
  } while (n != 0);

  return count;
}

int main(void) {
  int n;
  
  printf("Outputs the number of digits in n.\n");
  printf("Enter n: ");
  scanf("%d", &n);

  /* Check for positive n */
  if (n < 0) {
    exit(EXIT_FAILURE);
  }
  
  printf("Number of digits in n: %d\n", num_digits(n));

  exit(EXIT_SUCCESS);
}
