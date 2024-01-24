#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

char shift_upper_char(char ch, int shift) {
  return ((ch - 'A') + shift) % 26 + 'A';
}

char shift_lower_char(char ch, int shift) {
  return ((ch - 'a') + shift) % 26 + 'a';
}

char shift_char(char ch, int shift) {
  if (ch >= 'A' && ch <= 'Z') {
    return shift_upper_char(ch, shift);
  } else if (ch >= 'a' && ch <= 'z') {
    return shift_lower_char(ch, shift);
  } else {
    return ch;
  }
}

int main(void) {
  char input[SIZE];
  char output[SIZE];
  char temp_char;
  int shift, input_length;

  printf("Enter message to be encrypted: ");
  for (input_length = 0; (temp_char = getchar()) != '\n'; input_length++) {
    input[input_length] = temp_char;
  }
  printf("Enter shift amount (1 - 25): ");
  scanf("%d", &shift);

  for (int i = 0; i < input_length; i++) {
    output[i] = shift_char(input[i], shift);
  }

  printf("Encrypted message: %s\n", output);
  
  return EXIT_SUCCESS;
}
