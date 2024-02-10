#include <stdlib.h>
#include <stdio.h>

int count_spaces(const char s[]) {
  int count = 0;
  const char *ptr = s;
  
  while (*ptr++) {
    if (*ptr == ' ') {
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
  
  return EXIT_SUCCESS;
}
