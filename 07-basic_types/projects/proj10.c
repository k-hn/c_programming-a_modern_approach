#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int main(void) {
  int vowel_count = 0;
  char input_str[100];

  printf("Enter a sentence: ");
  fgets(input_str, sizeof(input_str), stdin);

  for (int i = 0; input_str[i] != '\0'; i++) {
    if (is_vowel(input_str[i])) {
      vowel_count = vowel_count + 1;
    }
  }

  printf("Your sentence contains %d vowels.\n", vowel_count);

  return EXIT_SUCCESS;
}
