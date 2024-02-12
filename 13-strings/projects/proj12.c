#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_OF_WORDS 30
#define NUM_OF_WORD_CHARS 20

int main(void) {
  char sentence[NUM_OF_WORDS][NUM_OF_WORD_CHARS] = {{'\0'}};
  char temp_char;
  int i, j;
  
  printf("Enter a sentence: ");
  for (i = 0; i < NUM_OF_WORDS; i++) {
    for (j = 0; j < NUM_OF_WORD_CHARS; j++) {
      temp_char = getchar();
      if (temp_char == ' ' || temp_char == '.' || temp_char == '!' || temp_char == '?') {
	sentence[i][j] = '\0';
	break;
      } else {
	sentence[i][j] = temp_char;
      }
    }
    if (temp_char == '.' || temp_char == '!' || temp_char == '?') {
      sentence[++i][0] = temp_char;
      sentence[i][1] = '\0';
      break;
    }
  }

  for (int k = i - 1; k >= 0; k--) {
    for (int l = 0; l < strlen(sentence[k]); l++) {
      printf("%c", sentence[k][l]);
    }
    printf("%c", k == 0 ? '\0' : ' ');
  }
  printf("%s\n", sentence[i]);

  return EXIT_SUCCESS;
}
