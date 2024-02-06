#include <stdlib.h>
#include <stdio.h>

int count_spaces(const char s[]) {
  int count = 0, i;

  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == ' ') {
      count++;
    }
  }

  return count;
}

int count_spaces2(const char *s) {
  int count = 0;

  for (; *s != '\0'; s++) {
    if (*s == ' ') {
      count++;
    }
  }

  return count;
}

int main(void) {
  char message[100];

  printf("Enter message: ");
  fgets(message, 100, stdin);

  printf("Number of spaces: %d\n", count_spaces(message));
  printf("Number of spaces: %d\n", count_spaces2(message));
  
  return EXIT_SUCCESS;
}
