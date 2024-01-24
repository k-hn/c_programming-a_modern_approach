#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int char_to_num(char ch) {
  switch(ch) {
  case 'A':
  case 'B':
  case 'C':
    return 2;
  case 'D':
  case 'E':
  case 'F':
    return 3;
  case 'G':
  case 'H':
  case 'I':
    return 4;
  case 'J':
  case 'K':
  case 'L':
    return 5;
  case 'M':
  case 'N':
  case 'O':
    return 6;
  case 'P':
  case 'R':
  case 'S':
    return 7;
  case 'T':
  case 'U':
  case 'V':
    return 8;
  case 'W':
  case 'X':
  case 'Y':
    return 9;
  default:
    return ch;
  }
}

# define INPUT_SIZE 15
int main(void) {
  char str[INPUT_SIZE];
  int str_length;
  bool is_uppercase_character = false;
  
  printf("Enter phone number: ");
  for (int i = 0; i < INPUT_SIZE; i++) {
    scanf("%c", &str[i]);
  }

  for (int i = 0; str[i] != '\0'; i++) {
    is_uppercase_character = str[i] >= 'A' && str[i] <= 'Z';
    if (is_uppercase_character) {
      printf("%d", char_to_num(str[i]));  
    } else {
      printf("%c", str[i]);
    }    
  }
  printf("\n");

  return EXIT_SUCCESS;
}
