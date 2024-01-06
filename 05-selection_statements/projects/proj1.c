#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int number, num_of_digits = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number >= 0 && number < 10) {
    num_of_digits = 1;
  } else if (number < 100) {
    num_of_digits = 2;
  } else if (number < 1000) {
    num_of_digits = 3;
  }

  if (num_of_digits == 0) {
    printf("Cannot compute beyond 3 digits\n");
  } else {
    printf("The number %d has %d digits.\n", number, num_of_digits);
  }
  return EXIT_SUCCESS;
}
