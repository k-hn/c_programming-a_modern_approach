#include <stdio.h>
#include <stdlib.h>

char digit_to_hex_char(int digit);

int main(void) {
  int input;
  printf("Enter a digit to convert to hex: ");
  scanf("%d", &input);

  if (input < 0 || input > 15) {
    printf("Number should not be outside the range: 0 - 15");
    return EXIT_FAILURE;
  }

  printf("Hex: %c\n", digit_to_hex_char(input));

  return EXIT_SUCCESS;
}


char digit_to_hex_char(int digit) {
  return "0123456789ABCDEF"[digit];
}
