/* Determines the length of a message */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char ch;
  int len = 0;

  printf("Enter a message: ");
  while (getchar() != '\n') {
    len++;
  }

  printf("Your message was %d character(s) long.\n", len);

  return EXIT_SUCCESS;
}

