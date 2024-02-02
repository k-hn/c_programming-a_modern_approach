#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 100

void reverse_string(char str[], int n);

int main(void) {
  char str[STR_SIZE];
  char ch;
  int i;
  
  printf("Enter a message: ");
  for (i = 0; i < STR_SIZE && (ch = getchar()) != '\n'; i++) {
    str[i] = ch;
  }

  reverse_string(str, i);

  printf("Reversal is: %s\n", str);
  
  return EXIT_SUCCESS;
}

void reverse_string(char str[], int n) {
  char temp;
  char *low_ptr = &str[0];
  char *high_ptr = &str[n - 1];

  while (low_ptr < high_ptr) {
    temp = *high_ptr;
    *high_ptr-- = *low_ptr;
    *low_ptr++ = temp;
  }
}
