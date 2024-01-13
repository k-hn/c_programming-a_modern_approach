#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char input_str[100];
  int word_count = 0, char_count = 0;

  printf("Enter a sentence: ");
  fgets(input_str, sizeof(input_str), stdin);

  for(int i = 0; input_str[i] != '\0'; i++) {
    if(input_str[i] == ' ' || input_str[i] == '\n') {
      word_count += 1;
    } else {
      char_count += 1;
    }
  }

  printf("Average word length: %.1f\n", (float) char_count / (float) word_count);

  return EXIT_SUCCESS;
}
