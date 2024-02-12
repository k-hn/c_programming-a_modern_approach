#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ARR_SIZE 26
#define WORD_SIZE 100

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
  char temp_char;
  int i;

  char word1[WORD_SIZE] = {'\0'};
  char word2[WORD_SIZE] = {'\0'};
  
  printf("Enter first word: ");
  for (i = 0; (temp_char = getchar()) != '\n'; i++) {
    if (isalpha(temp_char)) {
      word1[i] = temp_char;
    }
  }

  printf("Enter second word: ");
  for (i = 0; (temp_char = getchar()) != '\n'; i++) {
    if (isalpha(temp_char)) {
      word2[i] = temp_char;
    }
  }  

  if (are_anagrams(word1, word2)) {
    printf("The words are anagrams.\n");
  } else {
    printf("The words are not anagrams.\n");
  }

  return EXIT_SUCCESS;
}

bool are_anagrams(const char *word1, const char *word2) {
  int result = 0;

  if (strlen(word1) != strlen(word2)) {
    return false;
  }
  
  for (int i = 0; i < strlen(word1); i++) {
    result = result + (word1[i] - word2[i]);
  }

  return result == 0;
}
