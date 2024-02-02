#include <stdio.h>
#include <stdlib.h>

#define INPUT_SIZE 100

void print_word(char sentence[], char *start_index, int sentence_length);

int main(void) {
  char terminating_char;
  char input[INPUT_SIZE];
  char temp_char;
  int len;
  char *ptr_input;

  printf("Enter a sentence: ");

  for (ptr_input = input; ptr_input < input + INPUT_SIZE; ptr_input++) {
    temp_char = getchar();
    if (temp_char == '.' || temp_char == '!' || temp_char == '?') {
      break;
    } else {
      *ptr_input = temp_char;
    }
  }
  terminating_char = temp_char;
  len = ptr_input - input;
  ptr_input--;
  
  for (; ptr_input >= input; ptr_input--) {
    if (*ptr_input == ' ' || ptr_input == input) {
      print_word(input, ptr_input, len);
    }
  }
  printf("%c\n", terminating_char);
  
  return EXIT_SUCCESS;
}

void print_word(char sentence[], char *ptr_start, int sentence_length) {
  char *ptr = ptr_start;
  
  if (*ptr == ' ') {
    ptr++;
  }
  
  for (; *ptr != ' ' && ptr < sentence + sentence_length; ptr++) {
    printf("%c", *ptr);
  }

  if (ptr_start != sentence) {
    printf(" ");
  }
}
