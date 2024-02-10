#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define INPUT_SIZE 100

bool is_foo(char *str, int start, int len);
void censor(char *str, int start, int len);
bool is_overflow(int index, int len);

int main(void) {
  char input[INPUT_SIZE];
  int input_length = 0;
  
  printf("Enter message: ");
  fgets(input, INPUT_SIZE, stdin);
  input_length = strlen(input);
  printf("length: %d\n", input_length);
  
  for (int i = 0; i < INPUT_SIZE; i++) {
    if (is_foo(input, i, input_length)) {
      censor(input, i, input_length);
    }
  }

  printf("Result: %s", input);

  return EXIT_SUCCESS;
}

bool is_overflow(int index, int len) {
  return index + 2 >= len;
}

bool is_foo(char *str, int start, int len) {
  if (is_overflow(start, len)) {
    return false;
  }

  return tolower(str[start]) == 'f' &&
    tolower(str[start + 1]) == 'o' &&
    tolower(str[start + 2]) == 'o'; 
}

void censor(char *str, int start, int len) {
  if (is_overflow(start, len)) {
    return;
  }
  
  char *ptr = &str[start];
  *ptr++ = 'x';
  *ptr++ = 'x';
  *ptr = 'x';
}
