#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_SIZE 26

void read_word(int counts[ARR_SIZE]);
bool equal_array(int counts1[ARR_SIZE], int counts2[ARR_SIZE]);

int main(void) {
  char tracking_arr[ARR_SIZE] = {0};
  /* char second_word[ARR_SIZE] = {0}; */
  char temp_char;
  int counts1[ARR_SIZE] = {0};
  int counts2[ARR_SIZE] = {0};
  
  printf("Enter first word: ");
  read_word(counts1);

  printf("Enter second word: ");
  read_word(counts2);

  if(equal_array(counts1, counts2)) {
    printf("The words are anagrams.\n");  
  } else {
    printf("The words are not anagrams.\n");
  }
  
  return EXIT_SUCCESS;
}

void read_word(int counts[ARR_SIZE]) {
  char temp_char;
  
  while ((temp_char = getchar()) != '\n') {
    if (isalpha(temp_char)) {
      counts[tolower(temp_char) - 'a'] += 1;
    }
  }
}

bool equal_array(int counts1[ARR_SIZE], int counts2[ARR_SIZE]) {
  for (int i = 0; i < ARR_SIZE; i++) {
    if (counts1[i] != counts2[i]) {
      return false;
    }
  }

  return true;
}
