#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* another day another attempt */
int char_to_score(char ch) {
  switch(toupper(ch)) {
  case 'A':
  case 'E':
  case 'I':
  case 'L':
  case 'N':
  case 'O':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
    return 1;
  case 'D':
  case 'G':
    return 2;
  case 'B':
  case 'C':
  case 'M':
  case 'P':
    return 3;
  case 'F':
  case 'H':
  case 'V':
  case 'W':
  case 'Y':
    return 4;
  case 'K':
    return 5;
  case 'J':
  case 'X':
    return 8;
  case 'Q':
  case 'Z':
    return 10;
  }
}

int main(void) {
  char *input_word;
  int score = 0;

  printf("Enter a word: ");
  scanf("%s", input_word);

  for (int i = 0; input_word[i] != '\0'; i++) {
    score += char_to_score(input_word[i]);
  }

  printf("Scrabble value: %d\n", score);
  
  return EXIT_SUCCESS;
}
