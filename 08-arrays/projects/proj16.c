#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 26

int main(void) {
  char tracking_arr[ARR_SIZE] = {0};
  /* char second_word[ARR_SIZE] = {0}; */
  char temp_char;
  
  printf("Enter first word: ");
  while ((temp_char = getchar()) != '\n') {
    if (isalpha(temp_char)) {
      tracking_arr[tolower(temp_char) - 'a'] += 1;
    }
  }

  printf("Enter second word: ");
  while ((temp_char = getchar()) != '\n') {
    if (isalpha(temp_char)) {
      tracking_arr[tolower(temp_char) - 'a'] -= 1;
    }
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    if (tracking_arr[i] != 0) {
      printf("The words are not anagrams.\n");
      return EXIT_SUCCESS;
    }
  }

  printf("The words are anagrams.\n");
  
  return EXIT_SUCCESS;
}
