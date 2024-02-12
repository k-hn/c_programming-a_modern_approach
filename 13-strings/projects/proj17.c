#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STR_SIZE 100

bool is_palindrome(char *message, int len);

int main(void) {
  char ch;
  char str[STR_SIZE];
  char *ptr_str = &str[0];

  printf("Enter a message: ");
  while ((ch = tolower(getchar())) != '\n') {
    if (isalpha(ch)) {
      *ptr_str = ch;
      ptr_str++;
    }
  }

  if (is_palindrome(str, ptr_str - str)) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
  
  return EXIT_SUCCESS;
}

bool is_palindrome(char *message, int len) {
  char *low = &message[0];
  char *high = &message[len - 1];

  while (low < high) {
    if (*low != *high) {
      return false;
    }

    low++;
    high--;
  }

  return true;
}
