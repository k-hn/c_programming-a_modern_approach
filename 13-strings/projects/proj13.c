#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void encrypt(char *message, int shift) {
  int message_len = strlen(message);

  for (int i = 0; i < message_len; i++) {
    message[i] = shift_char(message[i], shift);
  }
}

int main(void) {
  char input[SIZE];
  char temp_char;
  int shift;

  printf("Enter message to be encrypted: ");
  for (int i = 0; (temp_char = getchar()) != '\n'; i++) {
    input[i] = temp_char;
  }
  printf("Enter shift amount (1 - 25): ");
  scanf("%d", &shift);

  encrypt(input, shift);
  printf("Encrypted message: %s\n", input);
  
  return EXIT_SUCCESS;
}
