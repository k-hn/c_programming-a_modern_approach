#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_vowel(char ch);
int compute_vowel_count(const char *sentence);

int main(void) {
  char input_str[100];

  printf("Enter a sentence: ");
  fgets(input_str, sizeof(input_str), stdin);

  printf("Your sentence contains %d vowel(s).\n", compute_vowel_count(input_str));

  return EXIT_SUCCESS;
}

bool is_vowel(char ch) {
  char lower_ch = tolower(ch);
  
  if (lower_ch <= 'a' && lower_ch >= 'z') {
    return false;
  }
  
  switch(tolower(ch)) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    return true;
  default:
    return false;
  }
}

int compute_vowel_count(const char *sentence) {
  int count = 0;

  for (int i = 0; sentence[i] != '\0'; i++) {
    if (is_vowel(sentence[i])) {
      count += 1;
    }
  }

  return count;
}
