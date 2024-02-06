#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcat(char *s1, const char *s2);
char *strcat2(char *s1, const char *s2);

int main(void) {
  char input[100];

  printf("Enter string: ");
  scanf("%s", input);

  printf("Size of: %ld\n", sizeof(input));
  printf("String length: %ld\n", strlen(input));
  printf("Remaining space: %ld\n", sizeof(input) - strlen(input));

  return EXIT_SUCCESS;
}

char *strcat(char *s1, const char *s2) {
  char *p = s1;

  while (*p != '\0') {
    p++;
  }

  while (*s2 != '\0') {
    *p = *s2;
    p++;
    s2++;
  }

  *p = '\0';

  return s1;
}

char *strcat2(char *s1, const char *s2) {
  char *p = s1;

  while (*p) {
    p++;
  }

  while (*p++ = *s2++) {}

  return s1;
}
