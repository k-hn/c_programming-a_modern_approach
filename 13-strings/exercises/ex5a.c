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
  for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
    if (isalpha(str[i])) {
      str[i] = isupper(str[i]) ? str[i] : toupper(str[i]);
    }
  }
}
