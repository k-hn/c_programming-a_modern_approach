#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
  default:
    return 0;
  }
}

#define SCORE_ARRAY_SIZE 26

bool is_alphabet(char ch) {
  return toupper(ch) >= 'A' && toupper(ch) <= 'Z';
}

int main(void) {
  int score_array[SCORE_ARRAY_SIZE] = {1, 3, 3, 2,
				       1, 4, 2, 4,
				       1, 8, 5, 1,
				       3, 1, 1, 3,
				       10, 1, 1, 1,
				       1, 4, 4, 8, 4, 10};

  int score = 0;
  char current_char;

  printf("Enter a word: ");
  while((current_char = getchar()) != '\n') {
    if(is_alphabet(current_char)) {
      score += score_array[toupper(current_char) - 'A'];
    }
  }

  printf("Scrabble value: %d\n", score);
  
  return EXIT_SUCCESS;
}
