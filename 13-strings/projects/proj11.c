#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

double compute_average_word_length(const char *sentence);

int main(void) {
  char input_str[100];
  int word_count = 0, char_count = 0;

  printf("Enter a sentence: ");
  fgets(input_str, sizeof(input_str), stdin);

  printf("Average word length: %.1f\n", compute_average_word_length(input_str));

  return EXIT_SUCCESS;
}

double compute_average_word_length(const char *sentence) {
  int word_count = 0;
  int char_count = 0;

  for(int i = 0; sentence[i] != '\0'; i++) {
    if(sentence[i] == ' ' || sentence[i] == '\n') {
      word_count += 1;
    } else {
      char_count += 1;
    }
  }

  return (float) char_count / (float) word_count;
}
