#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int first_digit, second_digit, third_digit;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
  
  printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

  return EXIT_SUCCESS;
}
