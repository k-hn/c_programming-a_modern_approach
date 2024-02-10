#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i == 0 && isspace(ch)) {
      continue;
    } else if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';		/* Terminates the string */
  
  return i;			/* returns number of characters stored */
}

int main(void) {
  char message[100];
  
  printf("Enter message: ");
  read_line(message, 100);

  printf("Message: %s\n", message);

  return EXIT_SUCCESS;
}
