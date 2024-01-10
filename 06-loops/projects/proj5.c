#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input;
  int first_digit, second_digit;

  printf("Enter a number: ");
  scanf("%d", &input);

  do {
    printf("%d", input % 10);
    input /= 10;
  } while (input > 0);
  // first_digit = input / 10;
  // second_digit = input % 10;
  printf("\n");
  // printf("The reversal is: %d%d\n", second_digit, first_digit);

  return EXIT_SUCCESS;
}
