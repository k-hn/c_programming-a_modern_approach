#include <stdio.h>
#include <stdlib.h>

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n - 1) {
      str[i++] = ch;
    } else  {
      break;
    }
  }
  str[i] = '\0';		/* Terminates the string */
  
  return i;			/* returns number of characters stored */
}

int main(void) {
  char message[3];
  
  printf("Enter message: ");
  read_line(message, 3);

  printf("Message: %s\n", message);

  return EXIT_SUCCESS;
}
