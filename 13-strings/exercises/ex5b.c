#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define INPUT_SIZE 100

void capitalize(char *str);

int main(void) {
  char input[INPUT_SIZE];
  
  printf("Enter a message: ");
  fgets(input, INPUT_SIZE, stdin);

  capitalize(input);
  printf("Capitalized input: %s", input);
  
  return EXIT_SUCCESS;
}

void capitalize(char *str) {
  char *ptr = str;
  
  for (char *ptr = str; *ptr != '\0' && *ptr != '\n'; ptr++) {
    if (isalpha(*ptr)) {
      *ptr = isupper(*ptr) ? *ptr : toupper(*ptr);
    }
  }
}
