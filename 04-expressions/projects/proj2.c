#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input;
  int first_digit, second_digit, third_digit;

  printf("Enter a two-digit number: ");
  scanf("%3d", &input);

  first_digit = input / 100;
  second_digit = (input / 10) % 10;
  third_digit = input % 10;
  
  printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

  return EXIT_SUCCESS;
}
