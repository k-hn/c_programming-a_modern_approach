#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

char get_biff(char ch) {
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    switch(toupper(ch)) {
    case 'A':
      return '4';
    case 'B':
      return '8';
    case 'E':
      return '3';
    case 'I':
      return '1';
    case 'O':
      return '0';
    case 'S':
      return '5';
    default:
      return toupper(ch);
    }
  } else {
    return ch;
  }
}

void convert_to_biff(char input[], char output[], int input_length) {
  int i;
  
  for (i = 0; i < input_length; i++) {
    if (input[i] == '\n') {
      continue;
    }
    output[i] = get_biff(input[i]);
  }
}


int main(void) {
  char input[ARRAY_SIZE];
  char converted_input[ARRAY_SIZE];
  int input_length = 0;

  printf("Enter message: ");
  fgets(input, sizeof(input) / sizeof(input[0]), stdin);

  /* Get length of input string */
  for (input_length = 0; input[input_length] != '\0'; input_length++) {}

  convert_to_biff(input, converted_input, input_length);
  printf("In BIFF-speak: %s%s\n", converted_input, input_length > 1 ? "!!!!!!!!!!" : "");

  return EXIT_SUCCESS;
}
