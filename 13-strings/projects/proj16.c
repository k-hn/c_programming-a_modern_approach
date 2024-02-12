#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 100

void reverse(char *message, int n);

int main(void) {
  char str[STR_SIZE];
  char ch;
  int i;
  
  printf("Enter a message: ");
  for (i = 0; i < STR_SIZE && (ch = getchar()) != '\n'; i++) {
    str[i] = ch;
  }

  reverse(str, i);

  printf("Reversal is: %s\n", str);
  
  return EXIT_SUCCESS;
}

void reverse(char *message, int n) {
  char temp;
  char *low_ptr = &message[0];
  char *high_ptr = &message[n - 1];

  while (low_ptr < high_ptr) {
    temp = *high_ptr;
    *high_ptr-- = *low_ptr;
    *low_ptr++ = temp;
  }
}
