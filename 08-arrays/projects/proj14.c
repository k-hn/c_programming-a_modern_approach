#include <stdio.h>
#include <stdlib.h>

#define INPUT_SIZE 100

void print_word(char sentence[], int start_index, int sentence_length) {
  if (sentence[start_index] == ' ') {
    start_index++;
  }
  for (int i = start_index; sentence[i] != ' ' && i < sentence_length; i++) {
    printf("%c", sentence[i]);
  }

  if (start_index != 0) {
    printf(" ");
  }
}

int main(void) {
  char terminating_char;
  char input[INPUT_SIZE];
  char temp_char = 'a';
  int i;

  printf("Enter a sentence: ");
  for (i = 0; i < INPUT_SIZE; i++) {
    temp_char = getchar();
    if (temp_char == '.' || temp_char == '!' || temp_char == '?') {
      break;
    } else {
      input[i] = temp_char;
    }
  }
  terminating_char = temp_char;

  for (int j = i; j >= 0; j--) {
    if (input[j] == ' ' || j == 0) {
      print_word(input, j, i);
    }

  }
  printf("%c\n", terminating_char);

  return EXIT_SUCCESS;
}
