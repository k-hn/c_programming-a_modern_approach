#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STR_SIZE 100

bool is_palindrome(char str[], int len);

int main(void) {
  char ch;
  char str[STR_SIZE];
  int len = 0;

  printf("Enter a message: ");
  while ((ch = tolower(getchar())) != '\n') {
    if (isalpha(ch)) {
      str[len] = ch;
      len++;
    }
  }

  if (is_palindrome(str, len)) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
  
  return EXIT_SUCCESS;
}

bool is_palindrome(char str[], int len) {
  int low = 0;
  int high = len - 1;

  while (low < high) {
    if (str[low] != str[high]) {
      return false;
    }

    low++;
    high--;
  }

  return true;
}
